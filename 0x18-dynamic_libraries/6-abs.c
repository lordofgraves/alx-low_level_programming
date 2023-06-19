#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @abs: enter integer
 * Return: absolute value
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		return (-abs);
	}
	else
	{
		return (abs);
	}
}
