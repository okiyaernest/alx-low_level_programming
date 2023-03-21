#include <stdio.h>

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if ((n / 10) == 0)
			{
				if (j != 0)
					putchar(' ');
				putchar(n + '0');

				if (j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

