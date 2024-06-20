/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:25:44 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 18:49:51 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	print_char(int c);
int	print_hex(unsigned long int ap, int input);
int	print_number(int number);
int print_pointer(void *ptr);
int	print_string(char *str);
int	print_unsigned(unsigned int num);

#endif