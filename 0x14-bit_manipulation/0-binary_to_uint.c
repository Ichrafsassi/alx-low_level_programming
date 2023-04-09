#include "main.h"

/**
 * Binary_to_unit :
 * binary_to_unit - convert from binary number to int (unsigned init)
 * @b:string contains binary number
 * x: refers to decimal value, the one will be returned
 * Return:converted number x, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x = 0;

	if (!b)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		x = 2 * x + (b[i] - '0');
		i++;
	}
	return (x);
}
