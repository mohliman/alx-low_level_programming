#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
