/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 01:51:46 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 19:36:26 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_number_len(int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len++;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

int	print_number(int number)
{
	ft_putnbr_fd(number, 1);
	return (ft_number_len(number));
}
