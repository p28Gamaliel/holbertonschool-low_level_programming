#include "main.h"

/**
 * _strspn - cuenta los caracteres de la subcadena prefijada
 *
 * @s: string de cadena
 * @accept: conjunto de caracteres permitidos
 *
 * Return: el numeros de caracteres validos al inicio de s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;
	}

	return (i);
}
