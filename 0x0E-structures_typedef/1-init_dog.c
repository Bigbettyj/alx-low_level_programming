#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes a variable of type struct dog
 * @d: variable to be initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
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
