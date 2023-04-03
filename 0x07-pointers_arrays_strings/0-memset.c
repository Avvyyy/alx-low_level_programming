#include "main.h"

/**
 * _memset - Function to fil first n bytes of a memory area with a constant bye
 * @s: Pointer to memory area whose first n bytes
 * will be filled with a constant amount of bytes
 * @b: Constant byte
 * @n: The number of byted to be filled in pointer s
 *
 * Return: p( pointer to s);
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
