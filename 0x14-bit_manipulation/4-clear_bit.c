#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: where the function will happen
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index > 63)
	{
		return (-1);
	}

	mask = ~mask;
	*n = *n & mask;

	return (1);
}
