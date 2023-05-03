#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
*
* Return: 0 if the linked list is empty
* 
*/
int pop_listint(listint_t **head)
{
listint_t *male;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
male = (*head)->next;
free(*head);
*head = male;
return (num);
}
