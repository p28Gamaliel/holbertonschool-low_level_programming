#include "main.h"

/**
 * _puts - imprime una cadena seguida de una nueva linea en la salida stdout
 *
 * @str: la cadena (frase) que vamos a imprimir
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
