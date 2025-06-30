#include "main.h"

/**
 * _strlen - calcula la longitud de una musica de una cadena de caracteres
 *
 * @s: puntero a la cadena
 *
 * Return: longitud de la cadena
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
