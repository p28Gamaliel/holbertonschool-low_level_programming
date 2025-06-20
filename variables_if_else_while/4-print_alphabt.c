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
	{
		if (letra != 'e' && letra != 'q')
			putchar(letra);
	}
	putchar('\n');

	return (0);
}
