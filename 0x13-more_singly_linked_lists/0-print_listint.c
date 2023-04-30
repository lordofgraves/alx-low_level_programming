#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @temp: temporary variable to hold a node
 * @h: head of listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
