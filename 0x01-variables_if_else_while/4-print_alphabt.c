#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print lowercase letters except q and e
 *
 * Return: 0 if code is successful
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alph[i] != 'q' && alph[i] != 'e')
		{
			putchar(alph[i]);
		}
	}
	putchar('\n');
	return (0);
}
