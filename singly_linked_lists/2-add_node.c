#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * _strlen - calcula la longitud de la cadena
  *
  * @s: la cadena
  *
  * Return: devuelve la longitud de la cadena
  */

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * add_node - anade el nuevo nodo como cabecera
 *
 * @str: la cadena que se va a duplicar
 * @head: puntero al puntero del primer nodo
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
