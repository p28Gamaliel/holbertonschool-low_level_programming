#include <stdio.h>

/**
 * main - Punto de entrada
 *
 * Return: Siempre 0 (exito)
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		putchar(letra);
	for (letra = 'A'; letra <= 'Z'; letra++)
		putchar(letra);
	putchar('\n');

	return (0);
}
