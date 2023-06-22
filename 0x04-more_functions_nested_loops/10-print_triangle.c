#include "main.h"

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */

void print_triangle(int size)
{
	int a, b, tumelo;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				tumelo = (size -a) - 1;
				if (b < tumelo)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
