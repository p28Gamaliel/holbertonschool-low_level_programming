#include "main.h"

/**
 * _islower - Verifica si un caracter es una letra miuscula.
 * @c: El caracter a veificar
 *
 * Return: 1 si c es minuscula, 0 en caso contrario
 */
int _islower(int c)
{
	if (c >= 'a'&& c <= 'z')
		return (1);
	else
		return (0);
}
