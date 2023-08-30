#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - a function that  returns the sum of
 * all the data of a linked list
 * @head : input value
 * Return: the sum of data in
 * linked list,if empty return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum = sum + t->n;
		t = t->next;
	}

	return (sum);
}
