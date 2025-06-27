#include <stdio.h>

/**
 * main - imprime del 1 al 100 pero sustituye multiplos de 3 y 5
 *
 * Return: Siempre 0 (exito)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
