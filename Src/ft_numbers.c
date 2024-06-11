/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:07:11 by marvin            #+#    #+#             */
/*   Updated: 2024/06/07 16:07:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/ft_printf.h"

void ft_num(int num, int *len)
{
    if (num == -2147483648)
    {
        write(1, "-2147483648", 11);
        (*len) += 11;
        return;
    }
    if (num < 0)
    {
        ft_putchar_len('-', len);
        ft_num(num / 10, len);
    }
    else
    {
        if(num > 9)
            ft_num(num / 10, len);
        ft_putchar_len(num % 10 + '0', len);
    }
}

void ft_pointer(size_t pointer, int *len)
{
    char    string[25];
    int     i;
    char *base_char;

    base_char = "0123456789abcdef";
    i = 0;
    write(1, "0x", 2);
    (*len) += 2;
    if (pointer == 0)
    {
        ft_putchar_len('0', len);
        return;
    }
    while (pointer != 0)
    {
        string[i] = base_char[pointer % 16];
        pointer /= 16;
        i++;
    }
    while (i--)
    {
        ft_putchar_len(string[i], len);
    }
}

void ft_hexadecimal(unsigned int x, int *len, char y)
{
    char string[25];
    char *base_char;
    int i;

    if(y == "Y")
        base_char = "0123456789ABCDEF";
    else
        base_char = "0123456789abcdef";
    i = 0;
    if(x == 0)
    {
        ft_putchar_len('0', len);
        return;
    }
    while (x != 0)
    {
        string[i] = base_char [x % 16];
        x /= 16;
        i++;
    }
    while (i--)
    {
        ft_putchar_len(string[i], len);
    }
}

void ft_unsinged_int(unsigned int u, int *len)
{
    if(u >= 10)
        ft_unsinged_int(u / 10, len);
    ft_putchar_len(u % 10 + '0', len);
}