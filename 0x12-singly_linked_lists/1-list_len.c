#include <stdlib.h>
#include "lists.h"
/**
* list_len - prints the number of elements in a linked list
* @h: pointer to the list_t list
*
* Return: prints the number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t node = 0;
while (h)
{
node++;
h = h->next;
}
return (node);
}
