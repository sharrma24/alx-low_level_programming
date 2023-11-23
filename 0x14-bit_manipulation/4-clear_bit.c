#include "main.h"

/**
 * clear_bit - value of bit
 * @n: pointer to the no
 * @index: index of the bit
 *
 * Return: 1 for success, or -1 f
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

