#include "main.h"

/**
 * _strstr - localiza la subcadena de una cadena mas larga
 *
 * @haystack: esta es la cadena principal
 * @needle: la subcadena que se buscara en la cadena principal
 *
 * Return: un puntero a la subcadena ubicada, o NULL si no
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}

