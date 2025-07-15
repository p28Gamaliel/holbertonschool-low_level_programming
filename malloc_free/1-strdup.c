#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copia una cadena a otro espacio de memoria
 * @str: cadena que se tiene que copiar
 *
 * Return: devuelve la copia duplicada que es copy
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
