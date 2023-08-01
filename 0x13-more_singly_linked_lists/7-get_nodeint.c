#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node listint_t linked list
 * @head: first node in listint_t
 * @index: index of the node
 * Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
