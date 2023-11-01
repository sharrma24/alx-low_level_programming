#include <stdio.h>
#include "main.h"

/**
 * _putchar - print character c to stdout
 * @c:Ther characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
