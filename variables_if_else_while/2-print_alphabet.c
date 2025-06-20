#include <stdio.h>

/**
 * main - Punto de entrada
 *
 * Return: Siempre 0 (exito)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
