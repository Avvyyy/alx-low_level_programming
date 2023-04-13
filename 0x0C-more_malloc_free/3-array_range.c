#include "main.h"

/**
 * array_range - Function to print an array of integers
 * @min: Minimum value of array
 * @max: Maximum value of array
 *
 * Return: NULL(if memory allocation fails or min > max)
 * else, pointer to array
 */

int *array_range(int min, int max)
{
	int size = (max - min) + 1, i;

	int *ptr = malloc(sizeof(int) * size);

	if (min > max)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		ptr[i] = min + 1;

	return (ptr);
}
