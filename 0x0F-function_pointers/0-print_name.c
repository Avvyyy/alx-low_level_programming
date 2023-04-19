#include "function_pointers.h"

/**
 * print_name - Function to print a name
 * @name: Pointer to name to be printed
 * @f: Pointer to function that prints  a name
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
