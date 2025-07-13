#include "main.h"

/**
 * factorial - saca el resultado hasta el caso base
 *
 * @n: variable que remplazara cada valor que tomara factorial
 *
 * Return: -1 si n es menor a cero, 1 si n es cero y n * factorial n - 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
