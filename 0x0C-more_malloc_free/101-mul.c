#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
  return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
  int res = 0;
  int sign = 1;
  int i = 0;

  if (s[0] == '-')
  {
    sign = -1;
    i++;
  }

  for (; s[i] != '\0'; i++)
  {
    if (!_isdigit(s[i]))
      return (0);

    res = res * 10 + s[i] - '0';
  }

  return (sign * res);
}

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
  if (n < 0)
  {
    putchar('-');
    n = -n;
  }

  if (n / 10)
    print_number(n / 10);

  putchar((n % 10) + '0');
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
  int num1, num2, product;

  if (argc != 3)
  {
    putchar('E');
    putchar('r');
    putchar('r');
    putchar('o');
    putchar('r');
    putchar('\n');
    return (98);
  }

  num1 = _atoi(argv[1]);
  num2 = _atoi(argv[2]);

  if (num1 == 0 || num2 == 0)
  {
    putchar('E');
    putchar('r');
    putchar('r');
    putchar('o');
    putchar('r');
    putchar('\n');
    return (98);
  }

  product = num1 * num2;

  print_number(product);
  putchar('\n');

  return (0);
}
