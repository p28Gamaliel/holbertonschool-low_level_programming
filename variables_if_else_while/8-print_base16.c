#include <stdio.h>

/**
 * main - Punto de entrada
 *
 * Return: Siempre 0 (exito)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		putchar(n < 10 ? n + '0' : n - 10 + 'a');
	putchar('\n');

	return (0);
}
