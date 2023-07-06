#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *old;
	listp_t *j;

	if (head != NULL)
	{
		j = *head;
		while ((old = j) && old != NULL)
		{
			j = j->next;
			free(old);
		}
		*head = NULL;
	}

}

/*
 * print_listint_safe - prints out the linked list with a loop
 * @head: a pointer to the head of a link
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	listp_t *ptr, *new_link, *add;

	ptr = NULL;

	while (head != NULL)
	{
		new_link = malloc(sizeof(listp_t));

		if (new_link == NULL)
			exit(98);

		new_link->p = (void *)head;
		new_link->next = ptr;
		ptr = new_link;
		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (len);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		len++;
	}
	free_listp(&ptr);
	return (len);
}

