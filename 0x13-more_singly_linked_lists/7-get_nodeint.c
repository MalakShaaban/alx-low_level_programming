#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 * @head: pointer to the first element of the linked list.
 * @index: index of the node to be returned.
 *
 * Return: pointer to the nth node,or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	for (; current != NULL && i < index ; i++)
		current = current->next;

	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
