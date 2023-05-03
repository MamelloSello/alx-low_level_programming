#include "lists.h"
/**
* add_nodeint - Adds a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
*
* Return: New element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *num;
num = malloc(sizeof(listint_t));
if (!num)
return (NULL);
num->n = n;
num->next = *head;
*head = num;
return (num);
}
