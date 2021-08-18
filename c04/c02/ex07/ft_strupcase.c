/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:47:51 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 16:47:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (!(str[index] > 'z' || str[index] < 'a'))
			str[index] -= 32;
		++index;
	}
	return (str);
}
