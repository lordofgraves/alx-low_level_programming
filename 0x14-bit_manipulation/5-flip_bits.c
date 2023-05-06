#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need 
 * to flip to get from one number to another.
 * @n: first num
 * @m: second num
 * returns: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}