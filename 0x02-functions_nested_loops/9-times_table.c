#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * n = firstloop, z = innerloop, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int n, z, d;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (z = 1; z <= 9; z++)
		{
			d = (n * z);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (z < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
