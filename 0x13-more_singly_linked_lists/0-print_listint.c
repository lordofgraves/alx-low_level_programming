#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t.
 * @h: a pointer to the head of list_t.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h);
{
	const listint_t *temp = h;
	size_t count = 0;

	while(temp != NULL)
	{
		printf("%d\n", temp->n);
                count++;
		temp = temp->next;
	}

	return (count);
}
