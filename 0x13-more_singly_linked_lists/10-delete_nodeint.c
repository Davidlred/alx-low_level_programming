#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at point index.
 * @head: head of a list.
 * @index:the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;

		free(temp);

		return (1);
	}

	listint_t *current = *head;
	listint_t *prev = NULL;

	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

