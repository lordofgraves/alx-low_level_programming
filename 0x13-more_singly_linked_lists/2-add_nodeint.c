#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of a linked list
 *@head: pointer to the head of the linked list
 *@n: an int contained in the new node
 *
 *Return: NULL if function fails or the element address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	
	return (newnode):
}
