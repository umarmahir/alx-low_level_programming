#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - Short description
 * @name: Dog name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: A struct to create dog with properties
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
