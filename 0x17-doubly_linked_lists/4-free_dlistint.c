#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *c;

	start = head;
	while (start != NULL)
	{
		c = start->next;
		free(start);
		start = c;
	}
}
