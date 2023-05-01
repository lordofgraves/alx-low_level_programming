#include "lists.h"

/**
 * free_listint - free the list
 * @head: head of the linked list
 *
 * Return: VOID
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head != NULL)
	{
	temp = head;
        head = head->next;
        free(temp);
	}
}
