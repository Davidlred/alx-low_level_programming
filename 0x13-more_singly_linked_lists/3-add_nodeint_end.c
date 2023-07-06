#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *holder;

	(void)holder;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	holder = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (holder->next != NULL)
		{
			holder = holder->next;
		}
		holder->next = new_node;
	}

	return (*head);
}
