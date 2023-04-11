#include "main.h"

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 *
 * Return: NULL if str is NULL or if memory allocation fails,
 * otherwise a return a pointer to the new copy
 */

char *_strdup(char *str)
{
	char *cop;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	cop = malloc(sizeof(char) * (size + 1));

	if (cop == NULL)
		return (NULL);

	size = 0;

	while (str[size] != '\0')
	{
		cop[size] = str[size];
		size++;
	}
	cop[size] = '\0';
	return (cop);
}
