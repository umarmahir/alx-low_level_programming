#include "main.h"
#include "dog.h"
#include <stdlib.h>

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
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
