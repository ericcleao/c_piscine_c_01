#include "ft_ultimate_div_mod.h"
#include <stdio.h>

int	main(void)
{
	int a = 15;
	int b = 6;

	ft_ultimate_div_mod(&a, &b);

	printf("div = %d | mod = %d\n", a, b);
}
