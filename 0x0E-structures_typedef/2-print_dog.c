#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the content of struct dog
 * @d: address to the variables
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	struct dog *p;

	p = d;

	if (p == NULL)
		return;

	if (p->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", p->name);

	if (p->age == 0)
		printf("Age: %.6f\n", p->age);
	else
		printf("Age: %.6f\n", p->age);

	if (p->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", p->owner);

}
