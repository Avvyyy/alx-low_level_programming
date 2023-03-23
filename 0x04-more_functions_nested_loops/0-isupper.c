#include "main.h"
#include <stdio.h>

/**
 * _isupperr - Program to check for uppercase letters
 * @c: ASCII of character to be checked
 *
 * Return: (0) if !uppercase and (1) if uppercase
 */

int _isupper(int c)
{
	char c;
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
