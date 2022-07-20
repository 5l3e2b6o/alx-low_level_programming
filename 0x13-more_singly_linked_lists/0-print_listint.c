#include "lists.h"

/**
 * print_listint - function that print numbers of a list.
 * @h: the address to the header of a list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
