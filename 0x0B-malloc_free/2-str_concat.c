#include "main.h"

/**
 * str_concat: Function that concatenates 2 strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: NULL(on failure) else pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
		i++;

	while (s[j] != '\0')
		j++;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	while (i > 0)
	{
		concat[i] = s1[i];

		while (j > 0)
			concat [j] = s2[j];
	}

	return (concat);
}
