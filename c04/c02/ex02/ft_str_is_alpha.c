/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:18:15 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 13:18:20 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] < 'A'
			|| (str[index] > 'Z' && str[index] < 'a')
			|| str[index] > 'z')
			return (0);
		++index;
	}
	return (1);
}
