#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: the number to convert
 * return: 0
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;

	for (i = num_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
