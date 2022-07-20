#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of a linked list.
 * @head: pointer to the head of a list.
 * @index: the number of the node to return.
 *
 * Return: address of the node or NULL if the index does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
