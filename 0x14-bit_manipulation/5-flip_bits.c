#include "main.h"

/**
 * flip_bits - changes from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of changes
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
