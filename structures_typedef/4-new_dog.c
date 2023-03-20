#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * dog_t *new_dog - copt dog
 * @name: name
 * @age: age
 * @owner: owmer
 * Return: return newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);
	if (!newdog->name || !newdog->owner)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);

	newdog->age = age;
	return (newdog);
}
