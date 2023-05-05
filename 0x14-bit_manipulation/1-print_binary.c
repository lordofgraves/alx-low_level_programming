#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: the number to convert
 * return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << 63;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while ((mask & n) == 0)
		mask = mask >> 1;

	while (mask) 
	{
		putchar((n & mask) ? '1' : '0');
		mask = mask >> 1
	}
}
