#include "main.h"
/**
 * _strlen - entry point
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int c, count;

	for (c = 0; s[c] != '\0'; ++c)
	{
		count += 1;
	}
	return (count);
}
