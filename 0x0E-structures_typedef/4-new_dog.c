#include "dog.h"
#include <stdlib.h>
#include <stddef.h>


/**
* _strcpy - create copy of a string
* @s: input string;
* Return: string copy
*/
char *_strcpy(char *s)
{
	char *new_str;
	int i = 0, j;

	if (s == NULL)
		return (NULL);

	while (s[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
		return (NULL);

	for (j = 0; s[j] != '\0'; j++)
		new_str[j] = s[j];

	new_str[j] = '\0';
	return (new_str);
}


/**
* new_dog - create a new function
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	char *namee, *ownerr;

	if (name == NULL || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		free(dogg);
		return (NULL);
	}

	namee = _strcpy(name);
	if (namee == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->name = namee;
	dogg->age = age;

	ownerr = _strcpy(owner);
	if (ownerr == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	dogg->owner = ownerr;

	return (dogg);
}
