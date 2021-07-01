/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:14:17 by kbenjell          #+#    #+#             */
/*   Updated: 2021/07/01 11:59:12 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char letter;
    for (letter = 'z'; letter > '`'; letter--)
        write(1, &letter, 1);
};
