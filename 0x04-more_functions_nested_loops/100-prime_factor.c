#include <stdio.h>
/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
int main()
{
    long long n = 612852475143;
    long long i, largest_factor;

    while (n % 2 == 0) {
        largest_factor = 2;
        n = n / 2;
    }
    for (i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            largest_factor = i;
            n = n / i;
        }
    }

    printf("%lld\n", largest_factor);
    return 0;
}
