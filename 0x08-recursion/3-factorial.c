#include "main.h"

/**
 *factorial - Function to print the factorial of a number
 *@n: Number whose factorial is to be printed
 *
 * Return: -1(if n is less than 0), 1( if n is 0) else n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * (factorial (n - 1));
}
