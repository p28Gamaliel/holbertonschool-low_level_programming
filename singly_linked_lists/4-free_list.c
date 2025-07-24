#include <stdlib.h>
#include "lists.h"

/**
 * free_list - libera una lista
 * @head: Puntero a la cabecera de la lista
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

