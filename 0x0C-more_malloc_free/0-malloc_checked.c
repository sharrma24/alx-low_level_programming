#include <stdlib.h>
#include "main.h"

/**
 * if malloc fails, the malloc_checked function should cause normal process termination
 * @b: bytes to be allocated
 *
 * Return: printiong a pointer into the assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
