#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name usingthe  pointer to function
 * @name: string tobe 0 added
 * @f: pointer tothe  function
 * Return: nothin
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
