#include <stdio.h>
/**
 * void print_alphabet is a function that print alphabet each in a line in lower case
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
