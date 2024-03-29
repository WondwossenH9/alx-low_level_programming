#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of listint_t list
 * @head: first node
 * Return: total of the sum of data in list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
