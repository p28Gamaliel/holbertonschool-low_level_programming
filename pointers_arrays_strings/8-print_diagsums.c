#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - imprime la diagonal de una matriz
 *
 * @a: puntero donde buscara los valores
 * @size: el tama√o de la matriz cuadrada
 */
void print_diagsums(int *a, int size)
{
	int i;
	int suma1 = 0, suma2 = 0;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i * size + 1];

		suma2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", suma1, suma2);
}
