#include "main.h"

/**
 * swap_int - Program that swaps the value of 2 integers
 * @a: First integer passed into the function
 * @b: Second integer passed into the function
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
