#include <stdio.h>

/**
 * print_diagsums - imprime la diagonal de una matriz
 *
 * @a: puntero a la matriz
 * @size: el tamano de la matriz cuadrada
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int suma1 = 0;
	long int suma2 = 0;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i * size + 1];

		suma2 += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", suma1, suma2);
}
