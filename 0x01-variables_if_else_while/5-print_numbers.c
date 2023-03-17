#include <stdio.h>

/**
 * main - function housing other functions 
 * void:Shows that function takes no arguments
 *
 * RETURN:0 if program is successful
*/

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
