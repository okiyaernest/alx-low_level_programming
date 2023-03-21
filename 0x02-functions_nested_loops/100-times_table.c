#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the maximum value of the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf(", %d", i * j);
		}
		printf("\n");
	}
}
