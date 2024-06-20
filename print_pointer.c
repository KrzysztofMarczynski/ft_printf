/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:29:12 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 20:02:23 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	print_pointer(void *ptr)
{
	int len;
	char x;

	len = 0;
	x = 'x';
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += print_hex((unsigned long int)ptr, x);
	return (len);
}