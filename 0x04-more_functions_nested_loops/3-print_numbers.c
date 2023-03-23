#include "main.h"

/**
 * print_numbers - Program to print all +ve single digits
 * @c : ASCII value of digits to be passed
 *
 * Return: No value
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
