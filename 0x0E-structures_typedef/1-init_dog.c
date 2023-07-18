#include "dog.h"
/**
 * struct dog  - structure holding the dog's info
 * init_dog - main fuction
 * @name: - pointer to name
 * @age: - age of dog
 * @owner: - name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
