#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
    int pld = nld % 10;

    if (pld < 0)
    {
        pld *= -1;
    }

    if (pld > 9)
    {
        putchar((pld / 10) + '0');
    }

    putchar(pld + '0');
    return pld;
}
