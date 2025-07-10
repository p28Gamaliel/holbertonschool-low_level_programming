#include "main.h"
#include <stddef.h>

/**
 * _strchr - localiza el primer caracter de una cadena
 *
 * @s: el string donde buscar
 * @c: el caracter a buscar
 *
 * Return: puntero a la primera aparicion c, o NULL si no se encuentra
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
