#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a list
 * @head : input value
 * @n : input value
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k;
	listint_t *j = *head;

	k = malloc(sizeof(listint_t));
	if (!k)

		return (NULL);

	k->n = n;
	k->next = NULL;

	if (*head == NULL)
	{
		*head = k;
		return (k);
	}
	while (j->next)

	j = j->next;
	j->next = k;

	return (k);
}
