#include "main.h"
#include <stdlib.h>
/**
* argstostr - Prints concatenates of all arguments 
* @ac: first argument takes int 
* @av: socond argument for number of array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int index;
int number;
int record = 0;
int count = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (index = 0; index < ac; index++)
{
for (number = 0; av[index][number]; number++)
count++;
}
count += ac;
str = malloc(sizeof(char) * count + 1);
if (str == NULL)
return (NULL);
for (index = 0; index < ac; index++)
{
for (number = 0; av[index][number]; number++)
{
str[record] = av[index][number];
record++;
}
if (str[record] == '\0')
{
str[record++] = '\n';
}
}
return (str);
}
