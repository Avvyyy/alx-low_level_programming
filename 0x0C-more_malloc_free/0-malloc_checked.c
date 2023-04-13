#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Integer to be pssed into the function
 *
 * Return: 98(if memory allocation fails) else pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);
	else
		return (mal);
}
