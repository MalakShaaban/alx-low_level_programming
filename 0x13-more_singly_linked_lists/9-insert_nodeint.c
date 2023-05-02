#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element in the list
 * @idx: index of the new node to be inserted
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	if (!head)
	return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	current = *head;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
