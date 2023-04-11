#include "main.h"

/**
 * create_array - Function to create array of charcters and initialise it
 * with a specific character
 * @size: Size of array
 * @c: Specific array to be used
 *
 * Return: Null(if size = 0 or if function fails) else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	char *myAr = (char *)malloc(size * sizeof(char));

	if (myAr  == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		myAr[i] = c;
	}

	return (myAr);
}
