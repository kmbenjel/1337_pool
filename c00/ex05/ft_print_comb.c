/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:56:01 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/04 10:56:08 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*	filters out numbersets which are in ascending order and distinct	*/

int	filter(char hundreds, char tens, char ones)
{
	if (hundreds < tens && tens < ones)
	{
		return (1);
	}
	return (2);
}

/*	writes out the current numberset to stdout	*/

void	put_three_chars(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	join(char hundreds, char tens, char ones)
{
	if (filter(hundreds, tens, ones) == 1)
	{
		put_three_chars(hundreds, tens, ones);
		if (!(hundreds == '7' && tens == '8' && ones == '9'))
			write(1, ", ", 2);
	}
}

/*			The ft_print_comb function:			*/

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	ones;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = '1';
		while (tens <= '8')
		{
			ones = '2';
			while (ones <= '9')
			{
				join(hundreds, tens, ones);
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
}
