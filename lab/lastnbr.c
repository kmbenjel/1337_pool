#include <stdio.h>


int ft_pow(int base, int exponent)
{
	int result;

	result = 1;
	if (exponent > 0)
		result *= base * ft_pow(base, exponent - 1);
	return (result);
}

int	last_nbr(int n)
{
	int	number;

	if (n > 0)
		number = ((10 - n) * (ft_pow(10,(n - 1)))) + last_nbr(n - 1);
	return (number);
}
int main()
{
	int n;
	
	n = last_nbr(9);
	printf("%d\n", n);
	return (0);
}
