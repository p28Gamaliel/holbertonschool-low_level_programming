#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplica dos números pasados como argumentos
 * @argc: Número de argumentos
 * @argv: Array de argumentos
 *
 * Return: 0 si éxito, 1 si hay error por número incorrecto de argumentos
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
