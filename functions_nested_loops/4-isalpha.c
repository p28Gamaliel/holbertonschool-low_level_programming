#include "main.h"

/**
 * _isalpha - comprueba si un caracter es alfabetico
 *
 * @c: El caracter a verificar
 *
 * Return: 1 si c es una letra y 0 en caso contrario
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
