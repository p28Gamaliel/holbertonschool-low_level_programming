#include "main.h"

/**
 * jack_bauer - imprime cada minuto del dia de jack bauer
 *
 *Return: minutos y horas mientras va avanzando
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		}
	}
}
