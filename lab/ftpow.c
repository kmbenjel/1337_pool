#include <stdio.h>

int ft_pow(int base, int exponent)
{
	int result;

	result = 1;
	if (exponent > 0)
		result *= base * ft_pow(base, exponent - 1);
	return (result);
}
int main ()
{
	int a = ft_pow(9, 3);
	printf("%d\n", a);
	return 0;	
}
