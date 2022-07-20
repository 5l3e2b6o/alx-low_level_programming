#include "lists.h"

/**
 * print_listint_safe - function that prints a list.
 * @head: pointer to the first element of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0, difference = 0;

	while (head != NULL)
	{
		difference = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (difference <= 0)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}
	return (i);
}
