#include <stdio.h>

char ft_ones(int number)
{
	char ones;

	ones = number % ((number / 10) * 10) + '0';
	return ones;
}


int main ()
{
	printf("%c", ft_ones(789));
}