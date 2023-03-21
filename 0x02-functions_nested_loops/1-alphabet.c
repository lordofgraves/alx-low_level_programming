#include <stdio.h>
/**
 * void print_alphabet is a function that print alphabet each in a line in lower case
 */
void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
}

int main(void) {
    print_alphabet();
    return 0;
}
