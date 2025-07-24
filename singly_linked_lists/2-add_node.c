#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - anade el nuevo nodo como cabecera
 *
 * @str: la cadena
 * @head: la cabecera
 *
 * Return: devuelve el nuevo nodo
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
