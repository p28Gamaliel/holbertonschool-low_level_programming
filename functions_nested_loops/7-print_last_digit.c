#include "main.h"

/**
 * print_last_digit - imprime el ultimo digito de un digito
 *
 * @n: variable que obtiene un valor
 *
 * Return: El valor del ultimo digito
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);

		return (last_digit);
}
