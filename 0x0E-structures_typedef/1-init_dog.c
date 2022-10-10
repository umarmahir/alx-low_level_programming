#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: 'A program that initializes a struct type'
 * @d: The dog structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Always 0 (Success)
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
