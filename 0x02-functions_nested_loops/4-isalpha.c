#include "main.h"
 /**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Description: Long description of a function
 * Don't forgot that a line should not exceed 80 characters.
 * But you're total free to use several lines properly
 * description you function
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
