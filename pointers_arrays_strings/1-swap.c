#include "main.h"

/**
 * swap_int - intercambia los valores de dos numeros enteros
 *
 * @a: puntero al primer entero
 * @b: puntero al segundo entero
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
