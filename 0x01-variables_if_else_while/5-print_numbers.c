#include <stdio.h>
/**
 * main - outputs numbers from 0-9
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
