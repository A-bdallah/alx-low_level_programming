#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array : input value
 * @size : input value
 * @action : input value
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
	return;
while (size-- > 0)
{
	action(*array);
	array++;
}
}
