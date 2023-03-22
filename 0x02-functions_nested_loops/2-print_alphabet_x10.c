#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int z, x;

	x = 0;

	while (x < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(z);
		}
		x++;
		_putchar('\n');
	}
}
