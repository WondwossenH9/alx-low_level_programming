#include "dog.h"
#include <stdlib.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int ia;

	ia = 0;

	while (s[ia] != '\0')
	{
		ia++;
	}

	return (ia);
}

/**
 * *_strcpy - copies string
 * @dest: pointer to buffer
 * @src: string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, ia;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (ia = 0; ia < len; ia++)
	{
		dest[ia] = src[ia];
	}
	dest[ia] = '\0';

	return (dest);
}
/**
 * new_type_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, else NULL
 */
dog_t *new_type_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
