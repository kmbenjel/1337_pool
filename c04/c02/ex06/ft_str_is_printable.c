/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:44:58 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 16:45:06 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (! (str[index] <= 127 && str[index] >= 32))
			return (0);
		++index;
	}
	return (1);
}
