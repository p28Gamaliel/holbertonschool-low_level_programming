#include <stdio.h>
#include "lists.h"

/**
 *print_list - imprime los valores de list_s
 *@h: el puntero al siguiente node
 *Return: el numero de nodos
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
