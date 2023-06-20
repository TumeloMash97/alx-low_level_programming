#include "main.h"

/**
 * _islower - Check if the entry is in lower.
 * @c: This is the entry
 *
 * Return: 1 for lowercase or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 112)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
