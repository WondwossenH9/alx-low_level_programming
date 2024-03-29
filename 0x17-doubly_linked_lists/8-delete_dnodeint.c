#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of list
 * @index: index of new node
 * Return: 1 if sucsess, -1 if it fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int a;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	a = 0;

	while (head1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		a++;
	}

	return (-1);
}
