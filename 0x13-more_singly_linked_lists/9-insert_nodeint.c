#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position.
* 
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: Pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *age;
listint_t *male = *head;
age = malloc(sizeof(listint_t));
if (!age || !head)
return (NULL);
age->n = n;
age->next = NULL;
if (idx == 0)
{
age->next = *head;
*head = age;
return (age);
}
for (i = 0; male && i < idx; i++)
{
if (i == idx - 1)
{
age->next = male->next;
male->next = age;
return (age);
}
else
male = male->next;
}
return (NULL);
}
