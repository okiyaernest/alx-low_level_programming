#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, separated by comma and space, followed
 * by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, n = 98;
    unsigned long int a = 1, b = 2, c;

    printf("%lu, %lu", a, b);

    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
