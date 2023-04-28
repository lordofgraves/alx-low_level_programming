#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
