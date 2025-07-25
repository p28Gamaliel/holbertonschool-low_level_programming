#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - imprime todos los elementos de una dlistint_t
 * @h: puntero a la cabecera de la lista
 *
 * Return: numero de nodos
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
