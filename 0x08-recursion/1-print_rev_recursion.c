#include "main.h"
<<<<<<< HEAD
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
>>>>>>> 2e0272e561547eee3612608a505aeb22c407afc9
