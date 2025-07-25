#include "main.h"

/**
 * _puts_recursion - imprime una cadena
 *
 * @s: puntero donde se encuentra la cadena
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
