#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: NULL if memory allocation fails,
 * otherwise a pointer to a the new string
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    int leng1 = 0, leng2 = 0, i = 0, j = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[leng1])
        leng1++;
    while (s2[leng2])
        leng2++;

    result = malloc(sizeof(char) * (leng1 + leng2 + 1));
    if (result == NULL)
        return (NULL);

    while (i == 0 || i < leng1)
    {
        result[i] = s1[i];
        i++;
    }
    while (j == 0 || j < leng2)
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';

    return (result);
}
