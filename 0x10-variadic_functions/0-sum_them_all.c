#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum parameters passsed to it
 * @n: Number of unknown parameters passed to a function
 *
 * Return: 0(f n == 0) else the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mySum;
	unsigned int i, sum;

	va_start(mySum, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(mySum, int);

	return (sum);

	va_end(mySum);
}
