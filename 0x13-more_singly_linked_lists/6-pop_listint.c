#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *n;
	listint_t *current;

	if (!*head)
		return (0);

	current = *head;

	head_node = current->n;

	n = current->next;

	free(current);

	*head = n;

	return (head_node);
}
