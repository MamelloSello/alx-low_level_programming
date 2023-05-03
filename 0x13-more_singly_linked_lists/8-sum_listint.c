#include "lists.h"
/**
* sum_listint - Write the sum of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int num = 0;
listint_t *male = head;
while (male)
{
num += male->n;
male = male->next;
}
return (num);
}
