#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the opcodes of its own main function
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bytes, a;
char *arr;
bytes = atoi(argv[1]);
if (argc != 2 && bytes < 0)
{
printf("Error\n");
exit(1);
}
arr = (char *)main;
for (a = 0; a < bytes; a++)
{
if (a == bytes - 1)
{
printf("%02hhx\n", arr[a]);
break;
}
printf("%02hhx ", arr[a]);
}
return (0);
}
