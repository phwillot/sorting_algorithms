#include "sort.h"

void swap_node(listint_t *current, listint_t *prev, listint_t **list);

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
		while (current->prev && current->n < current->prev->n)
		{
			swap_node(current, current->prev, list);
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap_node - Swap two nodes of dlinkedlist
 * @current: current node to swap
 * @prev: previous node to swap with current
 * @list: pointer of pointer of head dlinkedlist
 *
 * Return: Void
 */

void swap_node(listint_t *current, listint_t *prev, listint_t **list)
{
	if (prev->prev)
		prev->prev->next = current;
	else
		*list = current;
	if (current->next)
		current->next->prev = prev;
	prev->next = current->next;
	current->next = prev;
	current->prev = prev->prev;
	prev->prev = current;
}
