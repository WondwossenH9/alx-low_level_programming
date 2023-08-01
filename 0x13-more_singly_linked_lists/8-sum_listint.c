#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: first node in
 * Return: sum of all data in listint_t
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
