#include "main.h"

/**
 * is_prime_helper - Funcion auxiliar para verificar si un numero es primo
 * @n: Numero que se quiere verificar
 * @i: Divisor actual
 *
 * Return: 1 si es primo, 0 en caso contrario
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Verifica si un numero es primo
 * @n: Numero a evalua
 *
 * Return: 1 si es primo, 0 si no lo es
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
