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

#endif
