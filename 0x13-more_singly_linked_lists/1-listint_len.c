#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - a function that returns the
 * number of elements in a linked list
 * @h : input value
 * Return: number of elements in a
 * linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
