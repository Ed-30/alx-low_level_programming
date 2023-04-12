#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of a given bit to 0
 * @n: pointer of number to change
 * @index: index of bit to clear
 *
 * Return: 1 if successful, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

