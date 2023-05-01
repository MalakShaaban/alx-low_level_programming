#include "lists.h"

/**
 * free_listint2 - frees a linked list and set the head NULL
 * @head:pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
