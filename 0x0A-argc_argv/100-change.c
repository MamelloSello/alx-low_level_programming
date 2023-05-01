#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @arg: numberber of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int arg, char *argv[])
{
int number;
int a;
int result = 0;
int coins[] = {25, 10, 5, 2, 1};
if (arg != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
if (number < 0)
{
printf("0\n");
return (0);
}
for (a = 0; a < 5 && number >= 0; a++)
{
while (number >= coins[a])
{
result++;
number -= coins[a];
}
}
printf("%d\n", result);
return (0);
}
