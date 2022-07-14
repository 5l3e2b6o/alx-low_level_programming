#include "lists.h"

/**
 * free_list -  function that frees a list.
 * @head: first item in the list
 */

void free_list(list_t *head)
{
	list_t *aux;
	list_t *auxend;

	aux = head;

	while (aux != NULL)
	{
		auxend = aux->next;
		free(aux->str);
		free(aux);
		aux = auxend;
	}
}
