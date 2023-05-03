#include "lists.h"
/**
* get_nodeint_at_index - Returns the node at a certain index in a linked list
* @head: first node in the linked list
* @index: index of the node wii return
*
* Return: return NULL,
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *male = head;
while (male && i < index)
{
male = male->next;
i++;
}
return (male ? male : NULL);
}
