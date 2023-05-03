#include <stdlib.h>
#include "main.h"
/**
* count_word - function help count the number of words in a string
* @s: string to evaluate
*
* Return: number of variables
*/
int count_word(char *s)
{
int flag = 0;
int num = 0;
int owner;
for (owner = 0; s[owner] != '\0'; owner++)
{
if (s[owner] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
num++;
}
}
return (num);
}
/**
* **strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int c = 0;
int k = 0;
int d = 0;
int i;
int s;
int j;
int r;
while (*(str + d))
d++;
r = count_word(str);
if (r == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (r + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= d; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
j = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (s < j)
*tmp++ = str[s++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
s = i;
}
matrix[k] = NULL;
return (matrix);
}
