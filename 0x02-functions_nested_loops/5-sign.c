#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: The number to be checked
 * Return: 1 for the positive number, -1 for negative numberor 0 for anything else
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
