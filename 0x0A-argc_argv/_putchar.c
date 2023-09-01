#include <stdio.h>
#include "main.h"

/**
 * _putchar - write a characterfor  c to
 * @; It prints character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
