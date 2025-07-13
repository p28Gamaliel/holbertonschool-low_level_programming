#include "main.h"

/**
 * sqrt_helper - funcion auxiliar que busca la raiz cuadrada natural
 *
 * @n: numero al que se quiere calcular la raiz cuadrada
 * @guess: numero actual que se esta probando como una posible raiz
 *
 * Return: la raiz si guess*guess==n, -1 si es mayor, si no, llama guess+1
 *
 */
int sqrt_helper(int n, int guess)

{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - calcula la raiz cuadrada natural de un numero
 *
 * @n: numero al que se quiere calcular la raiz cuadrada
 *
 * Return: la raiz cuadrada natural si existe, o -1 si no la tiene
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
