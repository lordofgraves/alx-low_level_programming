#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: node list
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
