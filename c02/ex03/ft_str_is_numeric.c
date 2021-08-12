/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:33:33 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/15 14:06:40 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] < 48
			|| str[index] > 57)
			return (0);
		++index;
	}
	return (1);
}
