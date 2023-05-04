#include "main.h"

/**
 *  binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer  to a string of 0 and 1 chars
 *
 *  Return: the converted number or
 *  (0) if there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int strlen = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (b[strlen] == '0' || b[strlen] == '1')
	{
		dec <<= 1;
		dec += b[strlen] - '0';
		strlen++;
	}
	
	if (b[strlen] != '\0')
		return (0);

	return (dec);
}
