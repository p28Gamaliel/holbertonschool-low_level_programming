#include "main.h"

/**
 * rev_string - invierte la cadena de texto
 *
 * @s: puntero de la cadena
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	for (; s[len] != '\0'; len++)
		;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
