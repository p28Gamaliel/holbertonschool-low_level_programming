#include "main.h"

/**
 * _memcpy - copia un espacio de memoria
 *
 * @dest: destino de la copia
 * @src: fuente de la copia
 * @n: numero de bytes a copiar
 *
 * Return: puntero a dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
