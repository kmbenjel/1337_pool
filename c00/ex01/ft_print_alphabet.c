/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 07:22:43 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/01 08:00:23 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_alphabet(void)
{
        char letter;
        for (letter = 'a'; letter < '\{'; letter++)
			write(1, &letter, 1);
};
