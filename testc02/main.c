#include "../c02/ex00/ft_strcpy.c"
#include "stdio.h"

int main() 
{
	char	*src[20];
	char	*dest[20];
	src = "abcd";
	dest = "xxxxxxxxxxxx";

	
	printf("%s", ft_strcpy(dest, src));
}
