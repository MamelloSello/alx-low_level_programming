#include <stdlib.h>
#include "main.h"
/**
* *_realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previsouly allocated by malloc
* @old_size: Size of the allocated memory for ptr
* @new_size: New size of the new memory block
*
* Return: Pointer to the newly allocated memory block
*/
void *_realloc(void *age, unsigned int old_name, unsigned int new_name)
{
char *ptr1;
char *old_ptr;
unsigned int j;
if (new_name == old_name)
return (age);
if (new_name == 0 && age)
{
free(age);
return (NULL);
}
if (!age)
return (malloc(new_name));
ptr1 = malloc(new_name);
if (!ptr1)
return (NULL);
old_ptr = age;
if (new_name < old_name)
{
for (j = 0; j < new_name; j++)
ptr1[j] = old_ptr[j];
}
if (new_name > old_name)
{
for (j = 0; j < old_name; j++)
ptr1[j] = old_ptr[j];
}
free(age);
return (ptr1);
}
