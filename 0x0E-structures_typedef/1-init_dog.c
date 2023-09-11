#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - To initialize variable struct dog
 * @d: pointer parameter
 * @name: dog name parameter
 * @age: dog age parameter
 * @owner: owner name parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
