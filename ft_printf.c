/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:23:08 by rwood             #+#    #+#             */
/*   Updated: 2021/11/01 13:23:15 by rwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	define_a_type_specifier(char spec, int *count, va_list arg)
{
	if (spec == 'c')
		make_if_c(count, arg);
	else if (spec == 's')
		make_if_s(count, arg);
	else if (spec == 'p')
		make_if_p(count, arg);
	else if (spec == 'd' || spec == 'i')
		make_if_di(count, arg);
	else if (spec == 'u')
		make_if_u(count, arg);
	else if (spec == 'x')
		make_if_x(count, arg);
	else if (spec == 'X')
		make_if_x_upper(count, arg);
	else if (spec == '%')
	{
		ft_putchar_fd(spec, 1);
		*count += 1;
	}
	else if ((spec >= '0' && spec <= '9')
		make_if_another_ch(count);
	

}

int	ft_printf(const char *str, ...)
{
	const char	*format;
	va_list		args;
	int			len;

	format = str;
	len = 0;
	va_start(args, str);
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar_fd(*format, 1);
			format++;
			len++;
		}
		if (*format)
		{
			format++;
			define_a_type_specifier(*format, &len, args);
			format++;
		}
	}
	va_end(args);
	return (len);
}
int main()
{
	ft_printf("%d", ft_printf("     %b"));
}