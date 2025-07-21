#include <stdio.h>
#include "dog.h"

/**
 * print_dog - imprime los valores de una estructura dog
 * @d: puntero a la estructura dog
 *
 * Si d es NULL, no imprime nada.
 * Si alguno de los campos es NULL, imprime (nil) en su lugar.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
