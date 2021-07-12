#include "../ctwo/ex00/ft_strcpy.c"
#include <stdio.h>
int	main()
{
	char src[4];
	char dest[4];

	int i = 0;
	while (i < 3)
	{
		src[i] = i + '0' + 1;
		i++;
	}	
	dest[0] = '6';
	char *chain = ft_strcpy(dest, src);
	printf("%s", chain);
	return 0;
}
