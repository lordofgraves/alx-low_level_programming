#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * and set it's head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t**head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
