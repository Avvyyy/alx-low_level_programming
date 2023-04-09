#include "main.h"

/**
 * _strstr - Function to return the suubsection of an array
 * @haystack: The memory area to be checked for the subsection
 * @needle: The pointer to the subsection to be checked in haystack
 *
 * Return: pointer to beginnning of needle
 * in haystakc or NULL(if needle not found)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return ("NULL");
}
