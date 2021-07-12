/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:28:29 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/12 10:28:39 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>



/*		Power function		*/

int ft_pow(int base, int exponent)
{
	int	result;

	result = 1;
	if (exponent > 0)
		result *= base * ft_pow(base, exponent - 1);
	return (result);
}

/*		Determines the first and last possible combinations		*/

int *ft_first_and_last(int n)
{
	int start;
	int end;
	int index;

	start = 0;
	end = 0;
	index = 1;
	while (index < n)
	{
		start += index * pow(10, n - index - 1);
		++index;
	}
	while (index > )
	{
		start += index * pow(10, n - index);
		--index;
	}
	
}

/*		Sees if the digits of and int are ascending from left to right 	*/

int ft_are_digits_ascending(int current, int n)
{
	int	preceding;
	int	upcoming;

	if (current / ft_pow(10, n - 1) == 0)
		n--;
	while (n > 1)
	{
		preceding = current / ft_pow(10, n - 1);
		upcoming = (current - preceding * ft_pow(10, n - 1)) / ft_pow(10, n - 2);
		if (preceding < upcoming)
		{
			current -= preceding * ft_pow(10, n - 1);
			n--;
		}
		else
			return (0);
	}
	return (1);
}

/*		To print positive numbers	*/

void	ft_put_positive_number(int nb)
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

/*		Joins the chars and puts the commas		*/

void ft_join(int current, int n)
{
	ft_put_positive_number(current);
	if  ( !(

		current % (current / 10) == 9
		&& current / ft_pow(10, n - 1) == 10 - n
		&& current / ft_pow(10, n - 1) == 0
		))
		{
			ft_putchar(',');
			ft_putchar(' ');				
		}
}

void	ft_print_combn(int n)
{
	int current;
	int current_inside;

	current = 0;
	current_inside = current;
	while (current <= ft_pow(10, n))
	{
		if (ft_are_digits_ascending(current, n) == 1)
		{
			if ((current / ft_pow(10, n - 1) != 0))
			{
				ft_join(current, n);
			}		
			else if ((current / ft_pow(10, n - 2) != 0))
			{
				ft_putchar('0');
				ft_join(current, n - 1);
			}
		}
		current++;
	}
}