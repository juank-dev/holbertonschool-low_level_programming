#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Datatype of the dog.
 * @d: Direction &my_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}

}
