#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * find_listint_loop - a function that
 * @head : input value
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (!head)
		return (NULL);

	while (a && b && a->next)
	{
		a = a->next->next;
		b = b->next;

		if (a == b)
		{
			b = head;
			while (b != a)
			{
				b = b->next;
				a = a->next;
			}
			return (a);
		}
	}
	return (NULL);
}
