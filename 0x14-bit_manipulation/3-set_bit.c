#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @t: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *t, unsigned int index)
{
	if (index > 63)
		return (-1);

	*t = ((1UL << index) | *t);
	return (1);
}
