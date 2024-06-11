/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:01:04 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/15 17:58:10 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h> //biblioteka do zmiennej liczby argumentow
# include <stddef.h>
# include <stdlib.h>

void ft_putchar_len(char c, int *len);
void ft_str(char *arg, int *len);

void ft_num(int num, int *len);
void ft_pointer(size_t pointer, int *len);
void ft_hexadecimal(unsigned int x, int *len, char y);
void ft_unsinged_int(unsigned int u, int *len);

int ft_printf(const char *string, ...);


#endif