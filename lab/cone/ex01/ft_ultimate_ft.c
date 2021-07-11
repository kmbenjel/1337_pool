#include "/Users/kbenjell/code/cone/ex01/ft_ultimate_ft.c"
#include <stdio.h>

int main ()
{
	int	nbr = 10000;
	int *first;
	int **second;
	int ***third;
	int ****fourth;
	int *****fifth;
	int ******sixth;
	int *******seventh;
	int ********eighth;
	int *********nineth;

	first = &nbr;
	second = &first;
	third = &second;
	fourth = &third;
	fifth = &fourth;
	sixth = &fifth;
	seventh = &sixth;
	eighth = &seventh;
	nineth = &eighth;

	ft_ultimate_ft(nineth);
	printf ("%d\n", nbr);
	return 0;
}
