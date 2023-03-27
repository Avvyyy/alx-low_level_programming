#include "main.h"

/**
 * puts2 - Function to print every other character of
 * a string starting with the first character
 * @str : Pointer with string to be printed
 *
 * Retunr: None
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
