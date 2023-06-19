#include <stdio.h>

/**
 * main- Prints all the letters except q and e
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: Zero value
 */

int main(void)
{
	char  "abcdfghijklmnoprstuvwxyz";


	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
