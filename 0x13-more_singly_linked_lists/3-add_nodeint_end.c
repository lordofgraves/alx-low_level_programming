#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @head: pointer to the first node of the list.
 * @n: int that gives the value of the new node.
 * Return: address of the new element or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp ->next = newnode;
	}
	else
		*head = newnode;

	return (newnode);
}

