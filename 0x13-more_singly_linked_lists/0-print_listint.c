#include "lists.h"
/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 * Return: values of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (!(h == NULL))
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

