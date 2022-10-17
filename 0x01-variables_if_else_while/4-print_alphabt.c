#include <stdio.h>
/**
 * main - outputs last alphabet in lowercase with exception of q and e
 * Return: return zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i  <= 'z'; i++)
	{
		if (i == 'e')
		{
			continue;
		}
		else if (i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
