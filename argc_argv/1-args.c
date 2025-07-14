#include <stdio.h>

/**
 * main - imprime la cantidad de numero argumentos pasados
 * @argc: numero de argumentos
 * @argv: arreglo de argumentos
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
