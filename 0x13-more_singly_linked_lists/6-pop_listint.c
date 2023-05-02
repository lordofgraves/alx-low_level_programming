#include "lists.h"

/**
*pop_listint - deletes the head node of LISTINT_T
*@head: head of the list
*
*Return: the head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);

	*head = temp;
	return (data);
}
