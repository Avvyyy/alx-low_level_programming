#include "search_algos.h"

/**
  *linear_search - function that searches for a value in an
  *		array of integers using the Linear search algorithm
  *array: pointer to the first element of the array to search in
  *size: the number of elements in array
  *value: the value to search for
  *
  *Return: First index where the value is found in the array
  *	(-1): Value not in array or array = NULL
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if(!array)
		return(-1);

	for (i = 0; i <= size; i++)
	{
		if (value != array[i])
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		else
			return(i);
	}

	return(-1);
}
