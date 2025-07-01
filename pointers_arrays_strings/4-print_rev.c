#include "main.h"

/**
 * print_rev - imprime una cadena en reversa seguida de una nueva linea
 *
 * @s: la cadena (frase) que vamos a imprimir en reversa
 */
void print_rev(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
		;

	for (len = len - 1; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
