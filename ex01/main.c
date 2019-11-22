#include "ft_ultimate_ft.h"
#include <stdio.h>

int	main(void)
{
	int a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	ft_ultimate_ft(&i);
	printf("a = %d\n", a);
}
