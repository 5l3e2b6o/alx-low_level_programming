#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to '0'.
 * @n: pointer to the number.
 * @index: where is going to change the value.
 *
 * Return: 1 if it worked or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1 << index));

	return (1);
}
