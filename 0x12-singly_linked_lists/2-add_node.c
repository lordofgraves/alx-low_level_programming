#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (len);
}

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: a pointer to a pointer to the head of the linked list
 * @str: the string to store in the new node
 *
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head == NULL || str == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = _strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
