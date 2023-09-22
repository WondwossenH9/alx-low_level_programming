#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beginning of list_t list
 * @head: double pointer to list_t
 * @str: new string
 * Return: address of new element, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
