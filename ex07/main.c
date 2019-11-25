#include "ft_rev_int_tab.h"
#include <stdio.h>

int	main(void)
{
	int test[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	for(int i = 0; i < 15; i++)
	{
		printf("%d ", test[i]);
	}
	
	printf("\n");
	ft_rev_int_tab(test, 15);

	for(int i = 0; i < 15; i++)
	{
		printf("%d ", test[i]);
	}
}
