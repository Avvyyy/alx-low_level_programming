#include "main.h"

/**
 * _strdup - Function to return pointer to memory space which holds a
 * copied value
 * @str: Value to be copied
 *
 * Return: NULL(str is NULL o insufficient memory space) else
 *  pointer to copied string
 */

char *_strdup(char *str)
{
	unsigned int j,  i = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	newStr = malloc(sizeof(char) * (i + 1));

	if (newStr ==  NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newStr[i] = str[i];

	return (newStr);
}
