#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer to the standard output
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
  unsigned int num;

  if (n < 0)
  {
    _putchar('-');
    num = -n;
  }
  else
    num = n;

  if (num / 10)
    print_number(num / 10);

  _putchar((num % 10) + '0');
}
