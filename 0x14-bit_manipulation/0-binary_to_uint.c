#include "main.h"

/**
 * _pow - function that multiply a number n times.
 * @n: tue number of times to be multiply.
 *
 * Return: the number.
 */
unsigned int _pow(const int n)
{
	int i = 0;
	unsigned int p = 1;

	while (i < n)
	{
		p = p * 2;
		i++;
	}
	return (p);
}

/**
 * binary_to_uint - function that converts a binary number to an int.
 * @b: binary number.
 *
 * Return: decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 1, j = 0, sum = 0, n = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;

	while (b[j] != '\0')
	{
		if (b[j] == '1')
		{
			n = i - j;
			sum = sum + _pow(n);
		}
		j++;
	}
	return (sum);
}
