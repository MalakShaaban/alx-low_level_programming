#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previ = NULL, *current = *head, *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = previ;
		previ = current;
		current = next;
	}

	*head = previ;
	return previ;
}
