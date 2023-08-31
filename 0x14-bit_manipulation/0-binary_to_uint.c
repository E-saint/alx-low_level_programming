#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *bn)
{
	int i;
	unsigned int dec_val = 0;

	if (!bn)
		return (0);

	for (i = 0; bn[i]; i++)
	{
		if (bn[i] < '0' || bn[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (bn[i] - '0');
	}

	return (dec_val);
}
