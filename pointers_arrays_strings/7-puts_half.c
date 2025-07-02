#include "main.h"

/**
 * puts_half - imprime la segunda mitad de una cadena
 *
 * @str: la cadena que se va a imprimir
 */
void puts_half(char *str)
{
	int i, len = 0, start;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
