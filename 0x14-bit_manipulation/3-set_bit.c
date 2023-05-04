#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n:pointer to the number that will be changed
 * @index: index of the bit to set ti "1"
 * Return: 1 for success,-1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1ul << index) | *n);

	return (1);
}
