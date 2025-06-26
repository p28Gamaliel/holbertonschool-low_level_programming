#include "main.h"

/**
 * _isdigit - verifica si c es un digito
 *
 * @c: variable a verificar
 *
 * Return: 1 si es un digito y 0 en caso contrario
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
