#include "main.h"

/**
 * print_sign - imprime en signo de un numero
 *
 * @n: el numero a evaluar
 *
 * Return: 1 si n es mayor que cero, 0 si n es cero y -1 si n es menor que cero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
