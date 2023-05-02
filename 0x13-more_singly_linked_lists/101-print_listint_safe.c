#include "lists.h"
#include "stdio.h"


/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	 const listint_t *slow = head, *fast = head;

	 while (fast && fast->next)
	 {
		 slow = slow->next;
		 fast = fast->next->next;
		 if (slow == fast)
		 {
			 size_t counter = 1;
			 slow = slow->next;
			 while (slow != fast)
			 {
				 slow = slow->next;
				 counter++;
			 }
			 return counter;
		 }
	 }
	 return 0;
}

 /**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_s, index = 0;

	node_s = looped_listint_len(head);

	if (node_s == 0)
	{
		for (; head != NULL; node_s++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node_s; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_s);
}
