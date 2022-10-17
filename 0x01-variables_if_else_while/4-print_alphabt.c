#include <stdio.h>
/*
 * main - outputs last alphabet in lowercase with exception of q and e
 * Return: return zero
 */
int main(void)
{
	char i;

	for (i = 0; i  < 'z'; i++)
	{
		switch (i)
		{
			case 'q':
				continue;
			case 'e':
				continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
