/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:38:18 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/15 14:07:02 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 'z' || str[index] < 'a')
			return (0);
		++index;
	}
	return (1);
}
