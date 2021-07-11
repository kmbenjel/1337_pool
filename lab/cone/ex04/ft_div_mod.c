#include "/Users/kbenjell/code/cone/ex04/ft_ultimate_div_mod.c"
#include <stdio.h>
int main ()
{
	int a, b;
	int *pointera;
	int *pointerb;

	a = 10;
	b = 5;

	pointera = &a;
	pointerb = &b;

	ft_ultimate_div_mod(pointera, pointerb);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
