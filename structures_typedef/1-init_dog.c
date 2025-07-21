#include "dog.h"
#include <stddef.h>

/**
 * init_dog - inicializa una variable de tipo struct dog
 * @d: puntero a la estructura a inicializar
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: nombre del dueño
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
