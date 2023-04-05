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
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
