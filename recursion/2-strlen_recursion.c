#include "main.h"

/**
 * _strlen_recursion - imprime la longitud de una cadena
 *
 * @s: ubicacion de la cadena
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s +1));
}
