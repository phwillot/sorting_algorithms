#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * of integers in ascending order using the Insertion
 * sort algorithm
 * @list: pointer of pointer to head of dlinkedlist
 *
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
	}
}
