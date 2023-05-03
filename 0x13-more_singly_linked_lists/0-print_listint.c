#include "lists.h"
/**
* print_listint - Print elements of a linked list
* @h: linked list type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t age = 0;
while (h)
{
printf("%d\n", h->n);
age++;
h = h->next;
}
return (age);
}
