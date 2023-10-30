#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an that has  array of size and assign in char c
 * @size: size of arries
 * @c: char to assigned
 * Description: createan  array of  sizes  and assign char c
 * Return: pointer to array, NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
