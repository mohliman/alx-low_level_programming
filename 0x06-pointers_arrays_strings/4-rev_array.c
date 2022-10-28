#include "main.h"
/**
 * reverse_array - entry point
 * @a: param one
 * @n: param two
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
