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
	if (character <= 'z' && character >= 'a')
		character -= 32;
	return (character);
}

int	ft_char_is_alpha(char	character)
{
	if (! ((character <= 'z' && character >= 'a')
		|| (character <= 'Z' && character >= 'A')))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
			str[index] += 32;
		++index;
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
	while (str[index] != 0)
	{
		current_character = str[index];
		next_character = str[index + 1];
		if (index == 0 && current_character <= 'z' && current_character >= 'a')
			ft_charupcase(current_character);
		if ((ft_char_is_alpha(current_character) == 0)
			&& ft_char_is_alpha(next_character) == 1)
		{
			ft_charupcase(next_character);
		}
		++index;
	}
	return (str);
}
