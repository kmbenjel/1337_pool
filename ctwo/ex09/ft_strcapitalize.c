/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:08:57 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/14 17:09:00 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charupcase(char character)
{
	character -= 32;
	return (character);
}

int	ft_char_is_alpha(char	character)
{
	if (character < 'A'
		|| (character > 'Z' && character < 'a')
		|| character > 'z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str)
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
			str[index] += 32;
		++index;
		++str;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	current_character;
	int	next_character;

	index = 0;
	ft_strlowcase(str);
	while (str)
	{
		current_character = str[index];
		next_character = str[index + 1];
		if (! (ft_str_is_alpha(current_character))
			&& ft_str_is_alpha(next_character))
			ft_charupcase(str[index + 1]);
		++index;
		++str;
	}
	return (str);
}
