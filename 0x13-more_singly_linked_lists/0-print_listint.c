#include "lists.h"
/**
 * print_listint -a function that prints the elements of a listint_t list
 * @h: the pointer of the head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;
for (; h != NULL; h = h->next)
{
	printf("%d\n", h->n);
		counter++;
}

return (counter);
}
