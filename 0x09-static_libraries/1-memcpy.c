#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@desst: memory where is stored
 *@src: Memory where is copied
 *@n:No of bytes
 *
 *Return: copy  memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
