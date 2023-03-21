#include "dog.h"

/**
 * init_dog - initialises a variable of struct dog
 * @d : address
 * @name : variable name of dog
 * @age : age of dog
 * @owner : name of dog's owner
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	p = d;

	if (p == NULL)
	{
		printf("Ok");
		return;
	}

	p->name = name;
	p->age = age;
	p->owner = owner;
}

