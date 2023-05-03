#include "lists.h"
/**
* free_listint2 - Function that frees a listint_t list
* @head: Pointer to the listint_t list will be freed
*/
void free_listint2(listint_t **head)
{
listint_t *male;
if (head == NULL)
return;
while (*head)
{
male = (*head)->next;
free(*head);
*head = male;
}
*head = NULL;
}
