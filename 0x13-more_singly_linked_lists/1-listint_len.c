#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const struct node *h)
{
size_t counter = 0;
    for (; h != NULL; h = h->next)
	    counter++;
return (counter);
}
