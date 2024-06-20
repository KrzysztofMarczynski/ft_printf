/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:41:54 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/19 19:03:43 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	print_string(char *str)
{
	int len;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}