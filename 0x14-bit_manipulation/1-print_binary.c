#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_first_one = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			found_first_one = 1;
			_putchar('1');
		}
		else if (found_first_one || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (found_first_one == 0)
	{
		_putchar('0');
	}
}

