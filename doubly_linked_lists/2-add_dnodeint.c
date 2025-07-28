#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Agrega un nuevo nodo al inicio de una lista dlistint_t.
 * @head: Doble puntero al inicio de la lista.
 * @n: Valor entero que se almacenara en el nuevo nodo.
 *
 * Return: devuelve la dirección del nuevo elemento, o NULL si falo.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
