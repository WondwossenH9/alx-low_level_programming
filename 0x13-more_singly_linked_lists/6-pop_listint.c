#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: value in nodes deleted, else 0 if list is empty
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
