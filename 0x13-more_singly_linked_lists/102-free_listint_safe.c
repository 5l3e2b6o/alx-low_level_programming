#include "lists.h"

/**
 * free_listint_safe - function that frees a list.
 * @h: pointer to the first element of the list.
 *
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0, difference = 0;
	listint_t *tmp = NULL, *aux = NULL;

	tmp = *h;
	while (tmp != NULL)
	{
		difference = tmp - tmp->next;
		i++;
		if (difference <= 0)
		{
			free(tmp);
			*h = NULL;
			break;
		}
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
	*h = NULL;
	return (i);
}
