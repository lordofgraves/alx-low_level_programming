#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - finds the number of nodes in a list
  * @h: singly linked list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        num_nodes++;
        h = h->next;
    }

    return num_nodes;
}
