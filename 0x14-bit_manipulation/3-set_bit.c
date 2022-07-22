#include "main.h"

/**
 * set_bit - function that sts the value of a bit to '1'.
 * @n: pointer to the number.
 * @index: where is going to change the value.
 *
 * Return: 1 if it worked or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y = 1;

	if (index > 63)
		return (-1);
	y <<= index;
	*n = (*n | y);

	return (1);
}
