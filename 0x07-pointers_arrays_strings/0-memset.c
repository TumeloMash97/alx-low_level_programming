#include "main.h"

/**
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:function to be filled
*@b:desired value byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
