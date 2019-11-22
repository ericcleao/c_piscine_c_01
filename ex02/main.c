#include "ft_swap.h"
#include <stdio.h>

int	main(void)
{
	int a = 2;
	int b = 4;

	printf("a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);
}
