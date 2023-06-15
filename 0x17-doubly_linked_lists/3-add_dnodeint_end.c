#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: list
 * @n: node in list
 * Return: new node/NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (*head == NULL)
	{
		Node *new = malloc(sizeof(Node));
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return new;
	}
	if (start->next)
	{
		start = start->next;
	}
	start->next = new;
	new->prev = start;
	new->next = NULL;
	new->n = n;
	return (new);
}
