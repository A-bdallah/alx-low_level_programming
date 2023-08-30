#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - a function that free a lists
 * @head: input value
*/
void free_listint2(listint_t **head)
{
	listint_t *k;

	if (head == NULL)

		return;

	while (*head)
	{
		k = (*head)->next;
		free(*head);
		*head = k;
	}
	*head = NULL;
}
