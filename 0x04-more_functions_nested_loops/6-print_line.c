#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
  int i;

  if (n <= 0)
  {
    putchar('\n');
    return;
  }

  for (i = 0; i < n; i++)
    putchar('_');

  putchar('\n');
}
