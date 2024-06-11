/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:05:48 by marvin            #+#    #+#             */
/*   Updated: 2024/06/07 16:05:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_printf.h"

void ft_putchar_len(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}

void ft_str(char *arg, int *len)
{
    size_t i;

    i = 0;
    if(!arg)
    {
        write(1, "(NULL)", 6);
        (*len) += 6;
        return;
    }
    while(arg[i] != '\0')
    {
        ft_putchar_len(arg[i], len);
        i++;
    }
}