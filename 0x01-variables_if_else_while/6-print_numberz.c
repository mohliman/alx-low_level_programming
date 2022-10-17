#include <stdio.h>
/**
 * main - outputs numbers 0-9 with putchar function
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return(0);
}
