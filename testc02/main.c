#include "../c02/ex00/ft_strcpy.c"
#include "stdio.h"

int main() 
{
	char	src[] = { " khalid "};
	char	dest[9];
	char	*pointer;


	pointer = ft_strcpy(dest, src);
	


	
	printf("%s", *pointer);
}
