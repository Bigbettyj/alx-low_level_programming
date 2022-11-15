#include "dog.h"
#include <stdlib.h>
int_strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - lenght of string
 * @str: the string
 * Return: lenght of string
 */
int_strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
/**
 * _strcopy - copies string point from scr to dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogn;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogn = malloc(sizeof(dog_t));
	if (dogn == NULL)
		return (NULL);
	dogn->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogn->name == NULL)
	{
		free(dogn);
		return (NULL);
	}
	dogn->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogn->owner == NULL)
	{
		free(dogn->name);
		free(dogn);
		return (NULL);
	}
	dogn->name = _strcopy(dogn->name, name);
	dogn->age = age;
	dogn->owner = _strcopy(dogn->owner, owner);

	return (dogn);
}
