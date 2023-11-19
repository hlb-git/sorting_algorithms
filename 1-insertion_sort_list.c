#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in ascending order
 * @list: A pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert, *current;

	/* Return early if the list is empty or next pointer is null */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		insert = current->prev;
		while (insert != NULL && insert->n > current->n)
		{
			/* Swap the nodes */
			if (insert->prev != NULL)
				insert->prev->next = current;
			else
				*list = current; /* start of the list */

			if (current->next != NULL)
				current->next->prev = insert;

			insert->next = current->next;
			current->prev = insert->prev;
			current->next = insert;
			insert->prev = current;

			print_list(*list); /* Print the list after each swap */
			insert = current->prev; /* Move insert pointer back */
		}
		current = current->next;
	}
}
