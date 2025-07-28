#include "lists.h"

/**
 * dlistint_len - Cuenta el numero de nodos en una lista dlistint_t.
 * @h: Puntero al inicio de la lista.
 *
 * Return: Numero total de nodos en la lista.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}

	return (contador);
}
