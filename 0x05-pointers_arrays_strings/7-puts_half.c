#include "main.h"

/**
 * puts_half - Function to print the second half of a string
 * @str: Pointer to the string to be printed
 *
 * Return: Nonei
 */

void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != '\0';)
		i++;
	if (i % 2 == 0)
	{
		int j = i / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else if (i % 2 != 0)
	{
		int j = (i - 1) / 2;

		while (str[j] != '\0')
		{
			j++;
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
