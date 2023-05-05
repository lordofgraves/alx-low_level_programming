#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - prints the binary of a number
 * @n: the number to convert
 * return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int leftmostbit = 1ul << 63;
	char p = '0';

	while (!(leftmostbit & n) && leftmostbit != 0)
		leftmostbit = leftmostbit >> 1;

	if (leftmostbit == 0)
		write(1, &p, 1);

	while (leftmostbit)
	{
		if (leftmostbit & n)
			p = '1';
		else
			p = '0';
		write(1, &p, 1);
		leftmostbit = leftmostbit >> 1;
	}
}
