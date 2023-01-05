#include "main.h"
/**
 * factorial - Returns the factorial of a given integer.
 * @n: Integer argument of the function.
 *
 * Return: 0 On success.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
