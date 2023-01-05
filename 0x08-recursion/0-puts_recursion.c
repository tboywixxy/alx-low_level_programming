#include <string.h>
#include "main.h"
/**
 * _puts_recursion - This function prints a string, followed by a new line.
 * @s: This pointer argument of the function.
 *
 * Return: 0 on success.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
