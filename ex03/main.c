#include "ft_div_mod.h"
#include <stdio.h>

int	main(void)
{
	int a = 15;
	int b = 6;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d/%d = %d | with mod %d\n", a, b, div, mod);
}
