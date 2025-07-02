#include "main.h"

/**
 * puts2 - imprime una cadena de numeros pares de 0 a 8
 *
 * @str: puntero
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}

	_putchar('\n');
}
