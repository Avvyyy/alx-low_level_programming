#include "main.h"

/**
 * init_dog - Function that initilaises a variable of type struct dog
 * @d: New pointer variable of type struct dog
 * @name: Pointer variable to name
 * @age: Age of the dog
 * @owner: Pointer to name of dog
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
