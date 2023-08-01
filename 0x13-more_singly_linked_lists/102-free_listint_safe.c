#include "lists.h"

/**
 * free_listint_safe - frees lists with a loop
 * @h: pointer to the first node
 * Return: size of list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t b = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			b++;
		}
		else
		{
			free(*h);
			*h = NULL;
			b++;
			break;
		}
	}
	*h = NULL;
	return (b);
}
