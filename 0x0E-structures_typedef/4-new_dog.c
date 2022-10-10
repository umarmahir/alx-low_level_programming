#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point
 *
 * Description: 'A program that creates a new dog element of type struct'
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
