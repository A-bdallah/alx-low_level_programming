#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that free a list
 * @head : input value
*/
void free_listint(listint_t *head)
{
	listint_t *k;

	while (head)
	{
		k = head->next;
		free(head);
		head = k;
	}
}
