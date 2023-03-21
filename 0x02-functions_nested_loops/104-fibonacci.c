#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int count;

	printf("%lu, %lu, ", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf("%lu", c);
		if (count < 98)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
