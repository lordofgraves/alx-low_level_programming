#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * and set it's head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t**head)
{
	listint_t *firstnode, *secondnode;

	if(!head)
		return;

	firstnode = *head;
	secondnode = (*head)->next;
	while(secondnode)
	{
		free(firstnode);
		firstnode = secondnode;
		secondnode = secondnode->next;
	}
	free(firstnode);
	*head = NULL;
}
