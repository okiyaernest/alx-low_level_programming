#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[i + j + 1] = (sum % 10) + '0';
	}

	r[len1 + len2] = '\0';

	if (len1 + len2 + 1 > size_r)
		return (0);

	for (i = 0; i < len1 + len2; i++)
	{
		if (r[i] < '0' || r[i] > '9')
			return (0);
	}

	return (r);
}
