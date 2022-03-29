#include "../c02/ex00/ft_strcpy.c"
#include "stdio.h"

int main() 
{
	char	*src;
	char	*dest;
	src = "abcd";
	dest = "xxxxxxxxxxxx";

	
	printf("%s", ft_strcpy(src, dest));
}
