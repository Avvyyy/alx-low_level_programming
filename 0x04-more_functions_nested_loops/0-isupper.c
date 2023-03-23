#include "main.h"
#include <stdio.h>

/**
 * main - Program to check for uppercase letters
 *
 * Return: (0) if code is succesful
 */

int main(void)
{
	char c;
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
