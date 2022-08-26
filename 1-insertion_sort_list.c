#include "sort.h"

/**
 * insertion_sort_list - sort a dlist via insertion sort
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!(list && *list && (*list)->next))
		return;

	a = (*list)->next;

	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swappy(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}
}

/**
 * swappy - a little fella to help swap 2 nodes in a dlist
 * @a: ome node
 * @B: other node
 *
 */
void swappy(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}
