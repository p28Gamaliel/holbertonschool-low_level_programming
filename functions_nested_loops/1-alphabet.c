#include "main.h"

/**
 * print_alphabet - imprime el alfabeto en minusculas
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
