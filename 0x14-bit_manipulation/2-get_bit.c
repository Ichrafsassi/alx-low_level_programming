#include "main.h"
/**
 * get_bit - returns the value of the bit in "index" in decimal
 * @n : used for searching
 * @index: index of the bit
 * Return:value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int xbit;

	if (index > 63)
		return (-1);

	xbit = (n >> index) & 1;

	return (xbit);
}
