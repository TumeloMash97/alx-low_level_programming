#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *followed by a new line
 * @n: This is the entry
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 97; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
