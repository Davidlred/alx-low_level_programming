#include "lists.h"

/**
 * listint_len - returns elements in linked list
 * @h: head of a list.
 * Return: numbers of element in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

