#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - a function that delete the head
 * of a node in the list
 * @head : input value
 * Return:the data of the element deleted, if
 *the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *k = *head;
	int i;

	if (!*head || !head)
	{
		return (0);
	}
	i = (*head)->n;
	k = (*head)->next;
	free(*head);
	*head = k;

	return (i);
}
