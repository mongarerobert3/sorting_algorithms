#include "sort.h"

/**
 * _swap - swaps two nodes of the linked list.
 *
 * @h: pointer to  head of  list
 * @first_node: pointer to first-node
 * @sec_node: pointer to  second-node
 * Return: 0
 */
void _swap(listint_t **h, listint_t **first_node, listint_t *sec_node)
{
	(*first_node)->next = sec_node->next;
	if (sec_node->next != NULL)
		sec_node->next->prev = *first_node;
	sec_node->prev = (*first_node)->prev;
	sec_node->next = *first_node;
	if ((*first_node)->prev != NULL)
		(*first_node)->prev->next = sec_node;
	else
		*h = sec_node;
	(*first_node)->prev = sec_node;
	*first_node = sec_node->prev;
}

/**
 * insertion_sort_list - uses insertion to sort doubly linked-list
 * @list: pointer to the head of the list
 * Return: 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *next;

	if (list == NULL || *list == NULL)
		return;

	for (next = (*list)->next; next != NULL; next = next->next)
	{
		prev = next->prev;
		while (prev != NULL && prev->n > next->n)
		{
			_swap(list, &prev, next);
			print_list(*list);
		}
	}
}
