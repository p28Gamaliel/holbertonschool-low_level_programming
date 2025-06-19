#include <stdio.h>

/**
 * main - Imprime los tamaños de varios tipos en bytes
 * Return: 0 si el programa se ejecuta correctamente
 */
	int main(void)
{
	printf("El tamaño de un char: %zu byte(s)\n", sizeof(char));
	printf("El tamaño de un int: %zu byte(s)\n", sizeof(int));
	printf("El tamaño de un long int: %zu byte(s)\n", sizeof(long int));
	printf("El tamaño de un long long int: %zu byte(s)\n", sizeof(long long int));
	printf("El tamaño de un float: %zu byte(s)\n", sizeof(float));
	printf("El tamaño de un double: %zu byte(s)\n", sizeof(double));

	return (0);
}
