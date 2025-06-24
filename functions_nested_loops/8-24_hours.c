#include "main.h"

/**
 * jack_bauer - imprime cada minuto del dia de jack Bauer
 *
 *Return: minutos y horas mientras va avanzando
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; minute < 24; hour++)
	{
		for (minute = 0; hour < 60; minute++)
		{
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (minute / 10));
		_putchar('0' + (minute % 10));
		_putchar('\n');
		}
	}
}
