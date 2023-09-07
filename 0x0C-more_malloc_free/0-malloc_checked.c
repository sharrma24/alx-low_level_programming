#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocated  memory using malloc
 * @b: no  of bytes to be allocated
 *
 * Return: a pointer to the the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
