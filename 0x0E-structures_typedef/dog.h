#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/**
 * struct dog - structure stores some information about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct called "dog" that stores name, age
 * and the name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
