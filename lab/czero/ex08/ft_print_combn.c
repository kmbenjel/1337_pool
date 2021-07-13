#include "/Users/kbenjell/code/czero/ex08/ft_print_combn.c"
#include <stdio.h>
int main ()
{
	int n;

	n = 1;
	while (n < 10)
	{
		printf("(ft_print_combn(%d)) - Combinations for n = %d:\n\n", n, n);
		ft_print_combn(n);
		printf("\n\n");
		n++;
	}	
	return 0;
}

