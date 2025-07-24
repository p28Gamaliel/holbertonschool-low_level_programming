#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - agrega un nodo al final de la lista
 *
 * @head: doble puntero al inicio de la lista
 * @str: la cadena que sera duplicada
 *
 * Return: devuelve la direccion del nuevo nodo, o NULL si falla
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end, *temp;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != 0)
		length++;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);
	if (new_node_end->str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	new_node_end->len = length;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node_end;

	return (new_node_end);
}
