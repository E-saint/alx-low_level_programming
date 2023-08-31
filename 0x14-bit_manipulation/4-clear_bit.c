#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @t: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *t, unsigned int index)
{
	if (index > 63)
		return (-1);

	*t = (~(1UL << index) & *t);
	return (1);
}
