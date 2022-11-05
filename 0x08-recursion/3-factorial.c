#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int to return
 * Return: int
 */

int factorial(int n)
{
	int w;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		w = n * factorial(n - 1);
	}
	return (w);
}
