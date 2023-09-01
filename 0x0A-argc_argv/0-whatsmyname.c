#include <stdio.h>
#include "main.h"

/**
 * main - print the names of the program
 * @argc: no of arguments
 * @argv:Print  array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
