#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

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
	char *namee = name;
	char *ownerr = owner;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	dogg->name = namee;
	dogg->age = age;
	dogg->owner = ownerr;

	return (dogg);
}
