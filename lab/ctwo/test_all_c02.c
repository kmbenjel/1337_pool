#include	"/Users/kbenjell/code/ctwo/ex00/ft_strcpy.c"
#include	"/Users/kbenjell/code/ctwo/ex01/ft_strncpy.c"
#include	"/Users/kbenjell/code/ctwo/ex02/ft_str_is_alpha.c"
#include	"/Users/kbenjell/code/ctwo/ex03/ft_str_is_numeric.c"
#include	"/Users/kbenjell/code/ctwo/ex04/ft_str_is_lowercase.c"
#include	"/Users/kbenjell/code/ctwo/ex05/ft_str_is_uppercase.c"
#include	"/Users/kbenjell/code/ctwo/ex06/ft_str_is_printable.c"
#include	"/Users/kbenjell/code/ctwo/ex07/ft_strupcase.c"
#include	"/Users/kbenjell/code/ctwo/ex08/ft_strlowcase.c"

#include <stdio.h>

int main ()
{
	char dest[20];
	char src[20];


	dest = "nn";
	src = "abcdefjh";
	ft_strncpy(dest, src, 10);
	
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);


	dest = "khalid";
	src = "";
	
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);


	dest = "aaaaaak";
	src = "123";
	
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	return 0;
}
