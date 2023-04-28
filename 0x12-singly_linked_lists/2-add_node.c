#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list.
 * @str: string to be added to the list.
 *
 * Return: pointer to the new node on success, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
    if (head == NULL || str == NULL)
        return (NULL);

    size_t len = strlen(str);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    char *content = malloc(len + 1);
    if (content == NULL) {
        free(new_node);
        return (NULL);
    }
    memcpy(content, str, len + 1);

    new_node->str = content;
    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
