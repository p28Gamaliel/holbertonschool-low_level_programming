#include "main.h"
#include <stdlib.h>

/**
 * *create_array - crea una matriz
 * @size: tama�o que quiero
 * @c: posicion de cada valor que recibira
 * Return: la matriz
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
