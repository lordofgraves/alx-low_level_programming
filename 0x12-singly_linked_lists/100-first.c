#include <stdio.h>

static void print_message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

__attribute__((constructor))
void init(void)
{
    print_message();
}
