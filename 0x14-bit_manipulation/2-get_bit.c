#include "main.h"

/**
 * get_bit - function that return the value of a bit.
 * @n: the number.
 * @index: the number that indicates the bit.
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mov, i = 0;
	int pos = 0;

	if (index > 63)
		return (-1);
	while (n != 0)
	{
		mov = (n >> 1);
		mov <<= 1;
		if (n != mov && i == index)
			pos = 1;
		else if (i == index)
			pos = 0;
		n >>= 1;
		i++;
	}
	return (pos);
}
