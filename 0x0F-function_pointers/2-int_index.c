#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - searches for an integer
* @array: array to be searched
* @size:  the size of the array
* @cmp: pointer to the first comparing function
*
* Return: index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (0);
}
