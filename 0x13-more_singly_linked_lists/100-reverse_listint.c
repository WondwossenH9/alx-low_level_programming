#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: address of the first node
 * Return: pointer to the first node of the revesed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
