#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: the number to convert
 * return: 0
 */
void print_binary(unsigned long int n)
{
	int bits[sizeof(unsigned long int) * 8];
	int i, j;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		bits[i] = n & 1;
		n >>= 1;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bits[j] + '0');
	}
}
