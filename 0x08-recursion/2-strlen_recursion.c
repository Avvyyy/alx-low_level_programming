#inlude "main.h"

/**
 * _strlen_recursion - Function to return the length of a string
 * @s: Pointer to string whose length is calcullated
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
}
