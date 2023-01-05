#include "main.h"
/**
 * _print_rev_recursion - This function prints a string in reverse.
 * @s: This is the pointer argument that points to a given parameter.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(*s);
	char a[i];

	if (*s)
	{
		_putchar(
=======

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
