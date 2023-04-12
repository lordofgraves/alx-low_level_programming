#include "main.h"
/**
 * argstostr - concatenate all arguments into a new string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: NULL memory allocation fails, ac is 0 or av is NULL,
 * otherwise return a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *gather;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (unsigned int) ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len2++;
		}
		len2++;
	}
	gather = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (gather == NULL)
	{
		return (NULL);
	}
	len2 = 0;
	for (i = 0; i < (unsigned int) ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			gather[len2] = av[i][j];
			len2++;
		}
		gather[len2] = '\n';
		len2++;
	}
	gather[len2] = '\0';
	return (gather);
}
