#include "main.h"

/**
 * clear_bit-sets the value of given bit to 0
 * @n:pointer to the number that will be changed
 * @index: index of the bit to be cleared
 * Return: 1 success,- failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
