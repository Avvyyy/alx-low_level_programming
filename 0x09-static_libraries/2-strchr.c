#include "main.h"

/**
 * _strchr - Function that looks for a particular value in a string
 * and return a pointer to it. Else, returna a null value
 * @s: Memory area to be searched for a specific value
 * @c: character to be searched for
 *
 * Return: s(Pointer to the first valueof c) or null(if c is not found)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
