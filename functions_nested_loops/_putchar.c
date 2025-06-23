#include <unistd.h>

/**
 * _putchar - escribe el carácter c a stdou
 * @c: el carácter a imprimi
 * Return: 1 si tiene éxito, -1 si hay un erro
 */
	int _putchar(char c)
{
	return (write(1, &c, 1));
}
