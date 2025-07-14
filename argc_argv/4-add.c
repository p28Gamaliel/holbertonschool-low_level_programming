#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Suma números positivos pasados como argumentos
 * @argc: Cantidad de argumentos
 * @argv: Array de argumentos
 *
 * Return: 0 si éxito, 1 si algún argumento no es válido
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
