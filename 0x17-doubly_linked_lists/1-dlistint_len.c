#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: node list
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	while (h)
	{
		len += 1;
		h = h->next;
	}

	return (len);
}
