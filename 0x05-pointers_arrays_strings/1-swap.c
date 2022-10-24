#include "main.h"
/**
 * swap_int - entry point
 * @a: paramter one
 * @b: parameter two
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *b;
	j = *a;
	*a = i;
	*b = j;
}
