#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print 0 to 9
 *
 * RETURN: 0 if successful
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
