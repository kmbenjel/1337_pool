/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:31:42 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/11 11:55:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*	filters out identical numbers	*/
int	filter(int	number_aa, int number_bb)
{
	if (number_aa < number_bb)
		return (1);
	return (0);
}

/*		Is this the final combination so no space-comma? 		*/
int	not_final(int	number_aa, int number_bb)
{
	if (number_aa < 98
		|| number_bb < 99)
		return (1);
	return (0);
}

/*	writes out the current numberset to stdout	*/

void	printset(int number_aa, int number_bb)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = number_aa / 10 + '0';
	b = number_aa % 10 + '0';
	c = number_bb / 10 + '0';
	d = number_bb % 10 + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (not_final(number_aa, number_bb))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	number_aa;
	int	number_bb;

	number_aa = 0;
	while (number_aa <= 98)
	{
		number_bb = 1;
		while (number_bb <= 99)
		{
			if (filter(number_aa, number_bb))
				printset(number_aa, number_bb);
			number_bb++;
		}
		number_aa++;
	}
}
