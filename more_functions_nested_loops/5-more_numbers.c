#include "main.h"

/**
 * more_numbers - imprime los numeros del 0 al 14, diez veces
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
