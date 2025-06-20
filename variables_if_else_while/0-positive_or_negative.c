#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Asigna un numero aleatorio a la variable n,
 * luego imprime si el nÃmero es positivo, cero o negativo.
 * Return: Siempre 0 (exito)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d es positivo\n", n);
	else if (n == 0)
		printf("%d es cero\n", n);
	else
		printf("%d es negativo\n", n);

	return (0);
}
