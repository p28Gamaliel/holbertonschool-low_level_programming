#include <unistd.h>

/**
 * _putchar - escribe el caracter c a stdout
 * @c: el caracter a imprimir
 * Return: 1 si tiene exito, -1 si hay un error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
