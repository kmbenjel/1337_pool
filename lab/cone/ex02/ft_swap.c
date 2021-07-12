#include "/Users/kbenjell/code/cone/ex02/ft_swap.c"
#include <stdio.h>
int main ()
{
	int *a;
	int *b;
	int int_a;
	int int_b;

	int_a = 10;
	int_b = 58;

	a = &int_a;
	b = &int_b;
	ft_swap(a, b);
	printf("%d\n", *a);	
	printf("%d\n", *b);
	return 0;
}

