#include "main.h"

/**
 * set_bit - sets a bit at an index
 * @n: pointer no
 * @index: index of the bit
 *
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
