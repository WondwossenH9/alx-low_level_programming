#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: double pointer to list_t
 * @str: string to be added to node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;

	unsigned int length = 0;

	while (str[length])
		length++;
	element = malloc(sizeof(list_t));
	if (!element)
		return (NULL);
	element->str = strdup(str);
	element->length = length;
	element->next = (*head);
	(*head) = element;
	return (*head);
}
