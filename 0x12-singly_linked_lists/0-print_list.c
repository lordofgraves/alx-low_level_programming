#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h)
{
    size_t num_nodes = 0;
    const list_t *current = h;
    
    while (current != NULL)
    {
        printf("[%d] %s\n", current->len, current->str);
        num_nodes++;
        current = current->next;
    }
    
    return num_nodes;
}
