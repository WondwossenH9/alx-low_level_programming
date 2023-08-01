#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the at index index of listint_t
 * @head: address of the first element in listint_t
 * @index: index of the node to be deleted
 * Return: 1 (Success), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
