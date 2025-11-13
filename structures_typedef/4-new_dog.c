#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int index, char_index;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (index = 0; name[index] != '\0'; index++)
		;
	dog->name = malloc(sizeof(char) * (index + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (char_index = 0; char_index < index; char_index++)
		dog->name[char_index] = name[char_index];
	dog->name[index] = '\0';

	dog->age = age;

	for (index = 0; owner[index] != '\0'; index++)
		;

	dog->owner = malloc(sizeof(char) * (index + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (char_index = 0; char_index < index; char_index++)
		dog->owner[char_index] = owner[char_index];
	dog->owner[index] = '\0';

	return (dog);
}
