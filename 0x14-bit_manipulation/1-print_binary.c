#include "main.h"
/**
 * print_binary - prints binary that is aquivalent to decimal number
 * @n : is the binary that will be printed in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
