#include <stdio.h>
#include "main.h"

/**
 * main - prints allof the  arguments it receives
 * @argc: no of arguments
 * @argv: arries of arguments
 *
 * Return: Always 0 
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
