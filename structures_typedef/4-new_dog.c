#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dup - Copies string
 *
 * @str: String to be copied
 *
 * Return: Copied string
 */

char *dup(char *str)
{
	char *copy;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}

/**
 * new_dog - Creates info for new dog
 *
 * @name: Name of new dog
 *
 * @age: Age of new dog
 *
 * @owner: Owner of new dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = dup(name);
	dog->age = age;
	dog->owner = dup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	return (dog);
}


