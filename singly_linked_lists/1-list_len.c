#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - devuelve el numero de elementos de una lista list_t
 * @h: puntero al siguiente nodo
 *
 * Return: devuelve el numero de elementos
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
