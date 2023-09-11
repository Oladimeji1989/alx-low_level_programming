#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creating a new dog
 * @name: new dog name parameter
 * @age: new dog age parameter
 * @owner: new dog owner parameter
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nw, ow, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (nw = 0; name[nw] != '\0'; nw++)
		;
	nw++;
	(*dog).name = malloc(sizeof(char) * nw);
	if ((*dog).name == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < nw; a++)
		(*dog).name[a] = name[a];
	(*dog).age = age;
	for (ow = 0; owner[ow] != '\0'; ow++)
		;
	ow++;
	(*dog).owner = malloc(sizeof(char) * ow);
	if ((*dog).owner == NULL)
	{
		free((*dog).owner);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < ow; a++)
		(*dog).owner[a] = owner[a];
	return (dog);

}
