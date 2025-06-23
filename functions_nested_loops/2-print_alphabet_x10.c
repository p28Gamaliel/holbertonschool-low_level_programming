#include "main.h"

/**
 * print_alphabet_10 - imprime el alfabeto en minusculas 10 veces
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char letra;

	for (i = 0; i < 10; i++) /*bucle externo: 10 veces*/
	{
		for (letra = 'a'; letra <= 'z'; letra++) /*bucle interno: a-z*/
		{
			_putchar(letra);
		}
		_putchar('\n'); /*salto de linea despues de cada linea de abecedario*/
	}
}
