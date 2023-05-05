#include "main.h"

/**
 * binary_to_uint - turn a string of binary 
 * turn it to unsigned int
 * @b : const char
 * return : 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0, j;

	if (b == NULL)
		return(0);

	while (b[i] ! = '\0')
		i++;

	for (j = i - 1, i = 0; j >= 0; j--, i++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		result += (b[j] - '0') * (1 << i);
	}

	return result;
}
