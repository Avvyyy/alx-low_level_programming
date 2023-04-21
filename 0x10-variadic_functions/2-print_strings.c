#include "variadic_functions.h"

/**
 * print_strings - FUnction that prints strings followed by a new line"
 * @separator:  string to be printed between the strings
 * @n: Number of string parameters to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list myStrings;

	va_start(myStrings, n);

	if (separator == NULL)
		separator = "";

	for (i = 1; i <= n; i++)
	{
		char *b = va_arg(myStrings, char *);

		if (b == NULL)
			printf("(nil)");
		else
			printf("%s", b);

		if (i < n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(myStrings);
}
