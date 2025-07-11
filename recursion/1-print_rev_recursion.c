#include "main.h"

/**
 *  _print_rev_recursion - imprime una cadena al reves
 *
 * @s: puntero donde busca la palabra
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	 _print_rev_recursion(s + 1);
	 _putchar(*s);
}
