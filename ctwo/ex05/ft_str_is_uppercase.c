/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:43:19 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 16:43:24 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
			return (1);
		++index;
		++str;
	}
	return (0);
}
