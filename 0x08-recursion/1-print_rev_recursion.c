#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in reverse
 * @s: Pointer to string to be printed in revers
 *
 * Return: NONE
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
