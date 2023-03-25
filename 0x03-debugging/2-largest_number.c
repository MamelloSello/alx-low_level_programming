#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: Largest numbers
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = c;
}
else if (a > b && c > a)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
