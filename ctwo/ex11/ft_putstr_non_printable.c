/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:09:15 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 17:09:18 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char	*str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] <= 127 && str[index] >= 32)
			return (1);
		++index;
		++str;
	}
	return (0);
}

int	ft_str_is_alpha(char	*str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] < 'A'
			|| (str[index] > 'Z' && str[index] < 'a')
			|| str[index] > 'z')
			return (0);
		++index;
		++str;
	}
	return (1);
}

int	ft_str_is_numeric(char	*str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] >= 48
			&& str[index] <= 57)
			return (1);
		++index;
		++str;
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		current_character;
	char	*base;

	base = "0123456789abcdef";
	index = 0;
	while (str)
	{
		current_character = str[index];
		if ft_str_is_printable(current_character)
			ft_putchar(current_character);
		else
		{
			ft_putchar('\\');
			ft_putchar(base[index / 16]);
			ft_putchar(base[index % 16]);
		}
		++index;
		++str;
	}
}
