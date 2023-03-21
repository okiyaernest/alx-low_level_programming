#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }

    putchar('\n');

    return (0);
}
