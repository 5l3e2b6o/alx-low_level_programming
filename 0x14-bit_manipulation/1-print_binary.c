#include "main.h"

/**
 * print_binary - function that prints a binary number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{

	unsigned long int mov;
	unsigned int i = 0, z = 1, size = sizeof(n) * 8;

	while (i < size)
	{
		mov = (n << 1);
		mov >>= 1;
		if (n != mov)
		{
			_putchar('1');
			z = 0;
		}
		else if (!z)
			_putchar('0');
		n <<= 1;
		i++;
	}
	if (z == 1)
		_putchar('0');
}
