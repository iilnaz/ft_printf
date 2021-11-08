#include "ft_printf.h"

void	make_if_c(int *count, va_list arg)
{
	ft_putchar_fd(va_arg(arg, int), 1);
	*count += 1;
}

void	make_if_s(int *count, va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*count += 6;
	}
	else
	{
		while (*str)
		{
			ft_putchar_fd(*str, 1);
			*count += 1;
			str++;
		}
	}
}
