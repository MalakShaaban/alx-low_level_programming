#include "lists.h"
#include "stdio.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t s = 0;

	if (!h || !*h)
		return (0);
	current = *h;
	while (current)
	{
		s++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			return (s);
		}
		current = next;
	}
	*h = NULL;
	return s;
}
