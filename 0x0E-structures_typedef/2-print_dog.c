#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "dog.h"
/**
 * print_dog - a function that print a struct dog
 * @d : struct dog to print
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if
(d->name == NULL)
			printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)

		printf("Age : (nil)\n");
	else
		printf("Age : %f\n", d->age);
if
		(d->owner == NULL)
		printf("owner : (nil\n)");
	else
		printf("owner : %s\n", d->owner);

}
