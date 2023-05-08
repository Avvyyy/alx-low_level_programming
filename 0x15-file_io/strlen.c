#include "main.h"

/**
 * _strlen - Function to calculate the length of a string
 * @c: Pointer to string
 *
 * Return: Length of string
 */

int _strlen(char *c)
{
	int strlen = 0;

	while(c[strlen] != '\0')
		strlen++;

	return (strlen);

}
