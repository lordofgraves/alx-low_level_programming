#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of listint_t.
 * @h: a pointer to the head of list_t.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h);
{
	size_t count = 0;

	while(h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
