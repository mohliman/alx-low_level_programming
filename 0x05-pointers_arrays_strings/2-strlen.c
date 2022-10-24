#include "main.h"
/**
 * _strlen - entry point
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int c, count;

	count = 0;
	for (c = 0; s[c] != '\0'; ++c)
	{
		count++;
	}
	return (count);
}
