#include "main.h"

/**
 *pow_recursion - Function to return x to the power of y
 *@x: Base of the exponent
 *@y: Exponent
 *
 * Return: The value of x^y or -1(if y is less thn 0)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion (x, y -1);
	}
	else
		return (1);
}
