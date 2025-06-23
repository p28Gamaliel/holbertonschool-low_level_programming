#include "main.h"

/**
 * main - imprime el alfabeto en minusculas, seguido de una nueva linea
 *
 * Return: void
 */
main print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
