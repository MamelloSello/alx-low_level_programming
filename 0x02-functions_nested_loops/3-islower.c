#include "main.h"
 /**
 * _islower - Check if char is lowercase
 * @c: Is the char to be checked
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
