#include "main.h"

/**
 * _pow_recursion - devuelve el valor de x elevado a la potencia de y
 *
 * @x: valor de x que se elevara a la potancia de y
 * @y: valor que recibira la elevacion
 *
 * Return: si y es menor a 0, -1 si y es 0, 1 y devuelve eso multiplicado
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1));
}
