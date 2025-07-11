#include "main.h"

/**
 * _strpbrk - encuentra el primer caracter de la cadena s
 *
 * @s: la cadena done buscar
 * @accept: caracteres permitidos
 *
 * Return: puntero al primer caracter en s, o NULL, si no hay coincidencia
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (0);
}
