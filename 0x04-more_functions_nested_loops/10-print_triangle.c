#nclude "main.h"

/**
 * print_triangle - Program to print a triangle in the terminal
 * @size : Size of the triangle to be printed
 *
 * Return: None
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			_putchar('#')
		}
		_putchar('\n');
	}
}
