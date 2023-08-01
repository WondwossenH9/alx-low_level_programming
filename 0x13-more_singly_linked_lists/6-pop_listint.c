#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: address of the first element
 * Return: the head node's data (n), if linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);
	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (a);
}
