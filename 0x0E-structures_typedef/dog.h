#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog - Structure for a new dog
 * @name: Pointer to name of dog
 * @age: Name of dog
 * @owner: Pointer to name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog our_dog;
#endif
