#include "function_pointers.h"

/**
 * array_iterator - a function given as a
 * parameter on each element of an array
 *
 * @array: array to execute function on
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
