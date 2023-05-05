#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: long integer
 *
 * Return: void.
 */
void print_binary(unsigned long int n) 
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i;
	
	for (i = num_bits - 1; i >= 0; i--) 
	{
		if ((n >> i) & 1)
			putchar('1');
		else
			putchar('0');
	}
}
