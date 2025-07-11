#include "main.h"

/**
 * print_chessboard - imprime un tablero de ajedrez
 *
 * @a: puntero donde esta la incognita de numero de filas
 */
void print_chessboard(char (*a)[8])
{
	int fila, col;

	for (fila = 0; fila < 8; fila++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[fila][col]);
		}
		_putchar('\n');
	}
}
