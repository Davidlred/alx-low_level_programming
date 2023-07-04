#include <stdio.h>
#include "lists.h"
/**
 * list_printer - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes.
 */
size_t list_printer(const list_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}

