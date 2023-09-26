#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t
 * @h: pointer to linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
