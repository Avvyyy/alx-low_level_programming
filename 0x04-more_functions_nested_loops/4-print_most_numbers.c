#include "main.h"

/**
*print_most_numbers - prints 0 to 9 but leaves out 2 and 4
*@c: Digit to be printed
*Return: none
*/

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (!(c == '2' && c == '4'))
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
