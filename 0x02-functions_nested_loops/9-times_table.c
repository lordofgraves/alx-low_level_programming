#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * n = digits, z = inner loop digits, result = hold the result
 * Return: times table
 */
void times_table(void)
{
	int n, z, result;

	for (n = 0; n <= 9; n++)
	{
		for (z = 0; z <= 9; z++)
		{
			result = n * z;

			if ( z == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else 
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (z < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
