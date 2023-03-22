#include "main.h"
/**
 * main - take value
 * Return always 0 ( success )
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');

	return (0);
}
