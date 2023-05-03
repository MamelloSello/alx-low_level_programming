#include "lists.h"
/**
* free_listint - function that frees a listint_t list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
listint_t *male;
while (head)
{
male = head->next;
free(head);
head = male;
}
}
