#include "main.h"
#include "stdio.h"

/**
 * print_array - imprime los primeros n elementos de una matriz
 *
 * @a: el array de enteros
 * @n: la cantidad de elementos a imprimir
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
