#include "main.h"

/**
 * _strlen_recursion - imprime la longitud de una cadena
 *
 * @s: ubicacion de la cadena
 *
 * Return: si no s no encuentra nada devuelve 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
