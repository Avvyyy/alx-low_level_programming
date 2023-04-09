#include "main.h"

/**
 * *_memcpy - Function that copies the memory area of one pointer to another
 * @dest: Pointer that will receive the memory area of another pointer
 * @src: Pointer whose memory area is to be copied
 * @n : Integer specifying the amount of bytes to be copied
 *
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	unsigned int i = 0;

	while (i < n)
	{
		*p++ = *(src + i);
		i++;
	}

	return (dest);
}
