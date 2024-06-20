/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:45:33 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 19:51:02 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void ft_write(char c)
{
	write(1, &c, 1);
}

static void	ft_print_unsigned(unsigned int num)
{
	if (num >= 10)
	{
		ft_print_unsigned(num / 10);
		ft_print_unsigned(num % 10);
	}
	else
		ft_write(num + '0');
}

int	print_unsigned(unsigned int num)
{
	ft_print_unsigned(num);
	return (ft_num_len(num));
}
