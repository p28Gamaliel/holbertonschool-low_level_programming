#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 *struct list_s - la estructura de la lista
 *@str: cuenta los valores
 *@len: la longitud de los nodos
 *@next: apunta al siguiente nodo
 *Description: apunta a cada nodo, cuenta la longitud, apunta al siguiente
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
