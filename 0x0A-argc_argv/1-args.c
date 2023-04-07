#include <stdio.h>

/**
 * main - FUnction to print the number of command line arguments passed
 * into main
 * @argc: The number if argumnets to be printed
 * @argv: Argumnet vector
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
