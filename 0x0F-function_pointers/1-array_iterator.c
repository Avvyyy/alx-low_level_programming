#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: Pointer to integer array
 * @size: Size of the array
 * @action: pointer to the action to be executed on array items
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array && action)
		for (z = 0; z < size; z++)
			action(array[z]);
}
