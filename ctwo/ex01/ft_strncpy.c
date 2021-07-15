/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 06:05:19 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/10 06:56:18 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		++index;
	}
	while (dest[index] != '\0')
	{
		dest[index] = '\0';
		++index;
	}
	return (dest);
}
