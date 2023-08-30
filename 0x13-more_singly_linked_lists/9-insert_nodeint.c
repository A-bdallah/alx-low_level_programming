#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position
 * @head : input value
 * @idx : input value
 * @n : input value
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *t;
	listint_t *l = *head;

	t = malloc(sizeof(listint_t));

	if (!t || !head)
		return (NULL);

t->n = n;
t->next = NULL;
if (idx == 0)
{
	t->next = *head;
	*head = t;
	return (t);
}
for (j = 0; l && j < idx; j++)
{
	if (j == idx - 1)
	{
		t->next = l->next;
		l->next = t;
		return (t);
	}
	else
		l = l->next;
}
return (NULL);
}
