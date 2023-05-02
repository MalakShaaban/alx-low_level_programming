#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer to the first element in the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previ;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current; i++)
	{
		previ = current;
		current = current->next;
	}

	if (i != index)
		return (-1);

	previ->next = current->next;
	free(current);

	return (1);
}
