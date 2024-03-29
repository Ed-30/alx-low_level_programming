#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to prints
 * @f: pointers to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
