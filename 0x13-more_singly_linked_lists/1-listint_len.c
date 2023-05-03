#include "lists.h"
/**
* listint_len - Returns number of elements in a linked lists
* @h: linked list of type listint_t to traverse
*
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t age = 0;
while (h)
{
age++;
h = h->next;
}
return (age);
}
