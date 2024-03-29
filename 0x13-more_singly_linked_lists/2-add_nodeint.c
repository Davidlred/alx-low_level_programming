#include "lists.h"

/**
 * add_nodeint - a fuction to add a new node to a list
 * @head: head of a list.
 * @n:element of number n
 * Return: new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head =  new_node;

	return (*head);
}
