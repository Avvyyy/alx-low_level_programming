#include "main.h"

/**
 * _isdigit - Function that checks if c is a digit from 0 to 9
 * @c : ASCII value to be checked by the function
 *
 * Return: (1) if c is a digit and (0) if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
