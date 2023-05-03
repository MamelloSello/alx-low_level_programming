#include "lists.h"
/**
* add_nodeint_end - Adds a node at the end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return:  New element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *num;
listint_t *male = *head;
num = malloc(sizeof(listint_t));
if (!num)
return (NULL);
num->n = n;
num->next = NULL;
if (*head == NULL)
{
*head = num;
return (num);
}
while (male->next)
male = male->next;
male->next = num;
return (num);
}
