#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t liked list
 * @head: first node
 * @index: index of the node starting at 0
 * Return: nth node, or NULL if node does not exit
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
	if (temp)
		return (temp);
	else
		return (NULL);
}
