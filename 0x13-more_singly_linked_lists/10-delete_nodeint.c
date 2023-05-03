#include "lists.h"
/**
* delete_nodeint_at_index - Deletes a node in a linked list at a certain index
* @head: pointer to the first element in the list
* @index: index of the node to delete
*
* Return: 1 if succeded, or -1 Failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *male = *head;
listint_t *random = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(male);
return (1);
}
while (i < index - 1)
{
if (!male || !(male->next))
return (-1);
male = male->next;
i++;
}
random = male->next;
male->next = random->next;
free(random);
return (1);
}
