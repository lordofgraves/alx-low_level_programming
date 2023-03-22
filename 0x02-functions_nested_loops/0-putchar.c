#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *put = "_putchar";

	while (*put)
	{
		_putchar(*put);
		put++;
	}
	_putchar('\n');

	return (0);
}
