#include "main.h"
/**
* flip_bits - Returns the number of bits that needed to flip to,
* get from one number to another
* 
* @n: First number
* @m: Second number
*
* Return: Number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j,
num = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (j = 63; j >= 0; j--)
{
current = exclusive >> j;
if (current & 1)
num++;
}
return (num);
}
