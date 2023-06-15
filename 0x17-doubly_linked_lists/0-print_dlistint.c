#include "lists.h"

/**
 * print_dlistint - prints all the elements.
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
