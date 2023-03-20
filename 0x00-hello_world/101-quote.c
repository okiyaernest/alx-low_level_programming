#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a string to the standard error
 *
 * Return: Always 1 (error)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    fprintf(stderr, "%s", str);
    return (1);
}
