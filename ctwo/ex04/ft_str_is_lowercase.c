/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:38:18 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 13:38:21 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] <= 'z' && str[index] >= 'a')
			return (1);
		++index;
		++str;
	}
	return (0);
}
