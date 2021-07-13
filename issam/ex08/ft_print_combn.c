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

/*		Power function		*/

int	ft_pow(int base, int exponent)
{
	int	result;

	result = 1;
	if (exponent > 0)
		result *= base * ft_pow(base, exponent - 1);
	return (result);
}

/*		Determines the first and last possible combinations		*/

void	ft_start_and_end(int n, int *result)
{
	int	start;
	int	end;
	int	index;

	start = 0;
	end = 0;
	index = 1;
	while (index < n)
	{
		start += index * ft_pow(10, n - index - 1);
		++index;
	}
	while (index > 0)
	{
		end += (10 - index) * ft_pow(10, index - 1);
		--index;
	}
	result[0] = start;
	result[1] = end;
}

/*		Sees if the digits of and int are ascending from left to right 	*/

int	ft_are_digits_ascending(int current, int n)
{
	int	preceding;
	int	upcoming;

	if (current / ft_pow(10, n - 1) == 0)
		n--;
	while (n > 1)
	{
		preceding = current / ft_pow(10, n - 1);
		upcoming = (current - preceding * ft_pow(10, n - 1))
			/ ft_pow(10, n - 2);
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

void	ft_join(int nb, int current, int end)
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
		write(1, &digits[index], 1);
		index--;
	}
	if (current < end)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

/*		Joins the chars and puts the commas		*/
/*
void	ft_join(int current, int n)
{
	int	end;
	int	looping_range[2];

	ft_start_and_end(n, looping_range);
	end = looping_range[1];
	ft_put_positive_number(current);
	if (current != end)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
} */

void	ft_print_combn(int n)
{
	int	looping_range[2];
	int	current;

	ft_start_and_end(n, looping_range);
	current = looping_range[0];
	while (current <= looping_range[1])
	{
		if (ft_are_digits_ascending(current, n) == 1)
		{
			if ((current / ft_pow(10, n - 1) != 0))
				ft_join(current, current, looping_range[1]);
			else if ((current / ft_pow(10, n - 2) != 0))
			{
				write(1, "0", 1);
				ft_join(current, current, looping_range[1]);
			}
		}
		current++;
	}
}
