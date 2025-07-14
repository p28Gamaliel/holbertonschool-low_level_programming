#include <stdio.h>

/**
 * main - imprime todos los argumentos que recibe
 * @argc: numero de argumentos
 * @argv: array de argumentos
 *
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
