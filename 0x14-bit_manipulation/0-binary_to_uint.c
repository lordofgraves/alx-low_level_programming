#include "main.h"

/**
 * binary_to_uint - turn a string of binary
 * turn it to unsigned int
 * @b : const char
 * Return : result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * j);
		j *= 2;
		i--;
	}

	return (result);
}

