#include "main.h"

/**
 * _atoi - convierte una cadena a numero
 *
 * @s: la cadena fea que puede tener un numero entero
 *
 * Return: el numero magico que encuentre
 */
int _atoi(char *s)
{
	int i = 0;
	int num =0;
	int signo = 1;
	int encontre = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && !encontre)
		{

			signo = signo * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num *10 + (s[i] - '0');
			encontre = 1;

		}
		else if (encontre)
		{
			break;
		}
	}

	return (num * signo);
}
