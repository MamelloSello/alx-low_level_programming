#include "main.h"
/**
 * _isalpha - prints the sign of a number
 * @n: the int to check
 * @arg: First operand
 *
 * Return: 1 and prints + if n is greater than zero
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
