#include "main.h"
/**
* clear_bit -Function that sets the value of a given bit to 0
* @n: Pointer to change to the number
* @index: index of the bit to clear
*
* Return: 1 for successful, -1 for failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
