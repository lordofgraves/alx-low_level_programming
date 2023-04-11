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
    unsigned int leng1 = 0, leng2 = 0;
    if (s1)
    {
	    while (s1[leng1])
		    leng1++;
    }
    else
    {
	    s1 = "";
    }
    if (s2)
    {
	    while (s2[leng2])
		    leng2++;
    }
    else
    {
	    s2 = "";
    }
    result = (char *) malloc(sizeof(char) * (leng1 + leng2 + 1));
    if (result == NULL)
	    return (NULL);
    if (s1)
    {
	    for (leng1 = 0; s1[leng1]; ++leng1)
		    result[leng1] = s1[leng1];
    }
    if (s2)
    {
	    for (leng2 = 0; s2[leng2]; ++leng2)
		    result[leng1 + leng2] = s2[leng2];
    }
	result[leng1 + leng2] = '\0';
	return (result);
}
