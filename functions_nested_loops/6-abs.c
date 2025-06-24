#include "main.h"

/**
 * _abs - calcula el valor de absoluto de un numero entero
 *
 * @n: el numero del que se obtiene el valor absoluto
 *
 * Return: el valor absoluto de n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
