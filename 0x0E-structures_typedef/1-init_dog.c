#include "dog.h"
#include <stdio.h>

/**
* init_dog - intializes a variable of type struct dog.
* @d: The dog to b initialized
* @name: The name of the dog
* @age: The age of the dog
* @owner : The of the dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
