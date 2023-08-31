#include "main.h"

/**
 * print_binary - print the binary equivalent to a decimal number
 * @t: number to print in binary
 */
void print_binary(unsigned long int t)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = t >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
