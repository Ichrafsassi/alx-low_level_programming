#include "main.h"

/**
 * get_endianness-checks if a machine little or big endian
 * Return: 0 big machine,1 little
 */

int get_endianness(void)
{
	int i = 1;
	char *x = (char *) &i;

	return (*x);
}
