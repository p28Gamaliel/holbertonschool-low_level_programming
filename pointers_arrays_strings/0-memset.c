#include "main.h"

/**
 * _memset - llena un bloque de memoria con un valor constante
 *
 * @s: puntero al area de memoria a llenar
 * @b: byte constante a llenar
 * @n: numero de bytes a llenar
 *
 * Return: puntero al area de memoria s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
