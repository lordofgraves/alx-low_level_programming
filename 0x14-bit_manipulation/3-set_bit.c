#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: value
 * @index: point where the operation happens
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;
	if (index >= sizeof(unsined long int) * 8)
	{
		return -1;
	}

	*n |= mask;
	return (1);
}
