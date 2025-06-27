#include "main.h"

/**
 * print_line - imprime una linea en la terminal
 *
 * @n: variable que tomara el valor _
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
