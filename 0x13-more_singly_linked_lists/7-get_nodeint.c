#include "lists.h"
/**
 * get_nodeint_at_index - Finds the node at a specified index in a singly linked list.
 *
 * @head: Pointer to the head node of the list.
 * @index: The index of the node to be found (starting from 0).
 *
 * Return: A pointer to the node at the specified index, or NULL if the node is not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	return (head == NULL || count < index) ? NULL : head;
}
