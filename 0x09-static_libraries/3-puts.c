#include "main.h"

/**
 * _puts - Function to print a string with a new line
 * @str : Pointer housing string to be printed
 *
 * Return: None
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
