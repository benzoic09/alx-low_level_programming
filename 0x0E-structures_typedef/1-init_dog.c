#include <stdio.h>
#include "dog.h"

/**
 * init_dog - main fuction
 * @d: pointer to the structure
 * @name: - pointer to name
 * @age: - age of dog
 * @owner: - name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
d->name = name;
d->age = age;
d->owner = owner;
}
