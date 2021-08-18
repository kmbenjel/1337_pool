/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:09:06 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 17:09:09 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		dest[index] = str[index];
		++index;
	}
	while (dst[index] != 0)
	{
		dst[index] = '\0';
	}
	return (dest);
}
