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
		return (0);

	temp = *head;
	data = temp->n;
	free(temp);

	*head = (*head)->next;
	return (data);
}
