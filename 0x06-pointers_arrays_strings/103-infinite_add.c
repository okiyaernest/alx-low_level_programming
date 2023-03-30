#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 *
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m;

	i = j = k = l = m = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r || size_r == 0)
		return (0);
	r[size_r - 1] = '\0';
	for (i--, j--, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0); i--, j--, k--)
	{
		l = (i >= 0) ? n1[i] - '0' : 0;
		m = (j >= 0) ? n2[j] - '0' : 0;
		r[k] = (l + m + r[k + 1]) % 10 + '0';
		r[k + 1] = (l + m + r[k + 1]) / 10;
		r[k + 1] = (k == 0 && r[k + 1] != 0) ? 0 : r[k + 1];
	}
	if (k == -1 && r[k + 1] != 0)
		return (0);
	return (r + ((r[0] == 0) ? 1 : 0));
}
