#include "lists.h"
/**
 * list_len - Calculate the number of elements in a list
 * @h: Pointer to a linked list.
 * Return: a value
 **/

size_t list_len(const list_t *h)
{
	const list_t *holder;
	unsigned int checker = 0;

	holder = h;
	while (holder)
	{
		checker++;
		holder = holder->next;
	}
	return (checker);
}

