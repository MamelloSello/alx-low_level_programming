#include "main.h"
/**
* binary_to_unit- Function that converts a binary number to unsigned int
* @b: string containing the binary number
*
* Return: Converted number.
*/
unsigned int binary_to_uint(const char *s)
{
int j;
unsigned int dec_val = 0;
if (!s)
return (0);
for (j = 0; s[j]; j++)
{
if (s[j] < '0' || s[j] > 'j')
return (0);
dec_val = 2 * dec_val + (s[j] - '0');
}
return (dec_val);
}
