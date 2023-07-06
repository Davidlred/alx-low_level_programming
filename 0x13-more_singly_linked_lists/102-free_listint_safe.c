#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a list using a loop
 * @h: Pointer to the head pointer
 * Return: value of loop
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *current;

	while (*h)
	{
		current = (*h)->next;
		length++;
		if (current >= *h)
		{
			free(*h);
			*h = NULL;
			return (length);
		}

		free(*h);
		*h = current;
	}

	return (length);
}
