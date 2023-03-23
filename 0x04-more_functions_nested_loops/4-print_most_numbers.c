#include "main.h"

/**
*print_most_numbers - prints 0 to 9 but leaves out 2 and 4
*@c: ascii of digit
*Return: none
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
