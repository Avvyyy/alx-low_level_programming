#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to be iterated through
 * @size: Size of array
 * @cmp: Pointer to action to be taken on array
 *
 * Return: 0(if no element matches) -1(if size <= 0)
 * index of the first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
