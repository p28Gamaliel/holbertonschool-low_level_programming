#include <stdio.h>

/**
 * main - Punto de entrada
 *
 * Return: Siempre 0 (exito)
 */
int main(void)
{

	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
