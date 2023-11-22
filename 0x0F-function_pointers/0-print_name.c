#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name:add string
 * @f: points functions
 * Return: reruen nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
