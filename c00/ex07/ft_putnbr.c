/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:37:26 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/06 10:26:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_positive(int nb)
{
	int		index;
	char	digits[42];

	index = 0;
	while ((nb / 10) > 0)
	{
		digits[index] = nb % 10 + '0';
		nb = nb / 10;
		index++;
	}
	digits[index] = nb + '0';
	while (index >= 0)
	{
		ft_putchar(digits[index]);
		index--;
	}
}

void	ft_putnbr(int nb)
{
	int		index ;

	index = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr(214748364);
			ft_putchar('8');
			return ;
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	put_positive(nb);
}
