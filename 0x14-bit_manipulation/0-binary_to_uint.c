#include "main.h"

/**
 * binary_to_uint-converts a binary number to an unsigned int
 * @b:pointer to a string of 0 and 1 chars
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
