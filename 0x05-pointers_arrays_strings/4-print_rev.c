#include "main.h"

/**
 * print_rev - Function that prints a string in reverse order
 * @s : string that will be printed in reverse order
 *
 * Return : none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
