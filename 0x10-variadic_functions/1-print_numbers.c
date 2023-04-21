#include "variadic_functions.h"

/**
 * print_numbers - Function to print numbers
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myNumbers;
	unsigned int i = 1;

	va_start(myNumbers, n);

	if (separator == NULL)
		separator = "";

	for (; i <= n; i++)
	{
		printf("%d", va_arg(myNumbers, int));
		if (i < n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(myNumbers);
}
