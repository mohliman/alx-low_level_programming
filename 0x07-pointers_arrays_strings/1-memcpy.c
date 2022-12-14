#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: bytes from memory area to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
