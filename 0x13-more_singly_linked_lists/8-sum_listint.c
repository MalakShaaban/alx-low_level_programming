#include "lists.h"

/**
 * sum_listint - compute the sum of all the data (n) of a linked list.
 * @head : pointer to the first element of the list.
 *
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		sum_list += current->n;
		current = current->next;
	}
	return (sum_list);
}
