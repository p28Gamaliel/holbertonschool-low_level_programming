#include "main.h"

/**
 * *_strcpy - copia una cadena de caracteres (string)
 *
 * @dest: puntero al bufferb donde se copia el codigo
 *
 * @src: puntero a al cadena que se va a copiar
 *
 * Return: Punter del dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
