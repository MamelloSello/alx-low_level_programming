#include "main.h"
/**
* set_bit - Sets the value of bit at a given index to 1
* @n: Pointer number to change
* @index: Index of the bit to set to 1
*
* Return: 1 for successful, -1 for failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
