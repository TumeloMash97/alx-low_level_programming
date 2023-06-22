#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing.
 */

void print_square(int size)
{
	int x, y;

if (size > 0)
{
for (y = 0; y < size; y++)
{
for (x = 0; y < size; x++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
