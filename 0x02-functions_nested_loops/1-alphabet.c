#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int z;

	for (z = 'a'; z <= 'z'; z++)
	{
		_putchar(z);
	}
	_putchar('\n');
}
