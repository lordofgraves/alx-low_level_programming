#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: value
 * @index: point where the operation happens
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsined long int) * 8)
	{
		return -1;
	}

	*n |= 1ul << index;
	return (1);
}
