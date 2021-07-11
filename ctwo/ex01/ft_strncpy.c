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
	insigned int	i;

	i = 0;
	while (src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
