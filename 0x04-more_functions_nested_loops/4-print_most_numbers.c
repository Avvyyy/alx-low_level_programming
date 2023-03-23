#include "main.h"

/**
*print_most_numbers - prints 0 to 9 but leaves out 2 and 4
*@c: ascii of digit
*Return: none
*/

void print_most_numbers(void)
{
	char c;

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
