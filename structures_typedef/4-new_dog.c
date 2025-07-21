#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Crea una copia en memoria nueva de una cadena
 * @str: cadena original
 * Return: puntero a la nueva cadena (duplicada), o NULL si falla
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * new_dog - crea una nueva estructura dog_t con copias de name y owner
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: nombre del dueño
 * Return: puntero a la nueva estructura, o NULL si falla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
