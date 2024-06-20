/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:46:12 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/06/20 16:50:13 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "./ft_printf.h"
#include "./libft/libft.h"

static int	ft_print_sign(int input, va_list args)
{
	int	i;

	i = 0;
	if (input == 'c')
		i = print_char(va_arg(args, int));
	else if (input == 's')
		i = print_string(va_arg(args, char *));
	else if (input == 'p')
		i = print_pointer(va_arg(args, unsigned long long *));
	else if (input == 'd')
		i = print_number(va_arg(args, int));
	else if (input == 'i')
		i = print_number(va_arg(args, int));
	else if (input == 'u')
		i = print_unsigned(va_arg(args, unsigned int));
	else if (input == 'x' || input == 'X')
		i = print_hex(va_arg(args, unsigned int), input);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			arguments;
	unsigned int	res;

	res = 0;
	va_start(arguments, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				res += ft_print_sign(*input, arguments);// ft_printf("dupa %d", test);
			else if (*input == '%')
				res += write(1, "%", 1);
		}
		else
			res += write(1, input, 1);
		input++;
	}
	va_end(arguments);
	return (res);
}
