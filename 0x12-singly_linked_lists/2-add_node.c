#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *linked;
	unsigned int len = 0;

	while (str[len])
		len++;

	linked = malloc(sizeof(list_t));
	if (!linked)
		return (NULL);

	linked->str = strdup(str);
	linked->len = len;
	linked->next = (*head);
	(*head) = linked;

	return (*head);
}

