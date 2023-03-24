#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int hig, wid;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hig = 1; hig <= size; hig++)
		{
			_putchar('#');
			for (wid = 2; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
