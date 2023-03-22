#include "main.h"
/**
 * times_table -  a function that prints the n times table, starting with 0
 * n = digits, z = inner loop digits, result = hold the result
 * Return: times table
 */
void print_times_table(int n) 
{
	if (n < 0 || n > 15) 
	{
		return;
	}
	int i, j, result;
	for (i = 0; i <= n; i++) 
	{
		for (j = 0; j <= n; j++) 
		{
			result = i * j;
			if (result < 10) 
			{
				_putchar(result + '0');
			} else if (result < 100) 
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			} 
			else 
			{
				_putchar(result / 100 + '0');
				_putchar(result % 100 / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j < n) 
			{
                                _putchar(',');
                                _putchar(' ');
				if (i * (j + 1) < 10) 
				{
					_putchar(' ');
					_putchar(' ');
				} 
				else if (i * (j + 1) < 100) 
				{
                                        _putchar(' ');
				}
                        }
		}
		_putchar('\n');
	}
}
