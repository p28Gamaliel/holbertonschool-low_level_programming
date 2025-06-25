#include "main.h"

/**
 * _isupper - Verifica si hay mayusculas
 *
 * @c: Caracter a comprobar
 *
 * Return: 1 Solo si c es mayuscula
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
