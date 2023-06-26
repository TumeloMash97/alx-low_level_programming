#include "main.h"

/**
 * 1-swap.c - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: integers
 */
void swap_int(int *a, int *b);
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
