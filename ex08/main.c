#include "ft_sort_int_tab.h"
#include <stdio.h>

int	main(void)
{
	int test[15] = {1, 22, 12, 4, 23, 13, 5, 15, 94, 42, 2, 1, 76, 92, 18};

	for(int i = 0; i < 15; i++)
	{
		printf("%d ", test[i]);
	}
	
	printf("\n");
	ft_sort_int_tab(test, 15);

	for(int i = 0; i < 15; i++)
	{
		printf("%d ", test[i]);
	}
}
