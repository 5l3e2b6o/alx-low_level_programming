#include "lists.h"

/**
 * add_node - function that adds a new node at the begging of a list.
 * @head: pointer to the header of the list.
 * @str: String to add as header of the list.
 * Return: a pointer to the function.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *all_list;
	int i = 0;

	while (str[i] != '\0')
		i++;

	all_list = malloc(sizeof(list_t));
	if (all_list == NULL)
		return (NULL);

	all_list->str = strdup(str);
	all_list->len = i;
	all_list->next = *head;
	*head = all_list;

	return (all_list);
}
