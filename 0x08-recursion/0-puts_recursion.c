#include "main.h"

/**
 * _puts_recursion - Function to print a string
 * @s: Pointer to the string to be printed
 *
 * Return: NONE
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
