/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:06:17 by marvin            #+#    #+#             */
/*   Updated: 2024/06/11 16:06:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_printf.h"

static void ft_printf_checker(char s, va_list *args, int *len, int *i)
{
    if (s == 's')
        ft_str(va_arg(*args, char *), len);
    else if (s == 'd' || s == 'i')
        ft_num(va_arg(*args, int), len);
    else if (s == 'u')
        ft_unsinged_int(va_arg(*args, unsigned int), len);
    else if (s == 'x')
        ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
    else if (s == 'X')
        ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
    else if (s == 'c')
        ft_putchar_len(va_arg(*args, int), len);
    else if (s == '%')
        ft_putchar_len('%', len);
    else
        (*i)--;
}

int ft_printf(const char *string, ...)
{
    va_list args;
    int i;
    int len;

    i = 0;
    len = 0;
    va_start(args, string);
    while (string[i] != '\0')
    {
        if(string[i] == '%')
        {
            i++;
            ft_printf_checker(string[i], &args, &len, &i);
            i++;
        }
        else
        {
            ft_putchar_len((char)string[i], &len);
            i++;
        }
    }
    va_end(args);
    return (len);
}