/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 01:48:59 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 18:45:17 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	ft_print_hex(unsigned long int ap, char *temp, int len)
{
	if (ap <= 15)
		len += print_char(temp[ap % 16]);
	else
	{
		len = ft_print_hex(ap / 16, temp, len);
		len += print_char(temp[ap % 16]);
	}
	return (len);
}

int	print_hex(unsigned long int ap, int input)
{
	char	*temp;

	if (input == 'x')
		temp = "0123456789abcdef";
	else
		temp = "0123456789ABCDEF";
	return (ft_print_hex(ap, temp, 0));
}