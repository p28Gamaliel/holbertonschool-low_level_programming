#include "main.h"

/**
 * print_triangle - imptimr un triangulo luego de un salto de linea
 *
 * @size: variable a tomar el valor
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' ');

			for (k = 1; k <= i; k++)
				_putchar('#');
			if (i != size)
			_putchar('\n');
		}
		_putchar('\n');
	}
}
