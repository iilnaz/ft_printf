#include "ft_printf.h"

void	make_if_di(int *count, va_list arg)
{
	int	num;

	num = va_arg(arg, int);
	check_num(num, "0123456789", count);
}

void	make_if_p(int *count, va_list arg)
{
	unsigned long long	ptr;

	ptr = va_arg(arg, unsigned long long);
	ft_putstr_fd("0x", 1);
	*count += 2;
	if (!ptr)
	{
		ft_putchar_fd('0', 1);
		*count += 1;
	}
	*count += ft_putnbr_base(ptr, "0123456789ABCDEF");
}

void	make_if_u(int *count, va_list arg)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	*count += ft_putnbr_base(num, "0123456789");
}

void	make_if_x(int *count, va_list arg)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	*count += ft_putnbr_base(num, "0123456789abcdef");
}

void	make_if_x_upper(int *count, va_list arg)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	*count += ft_putnbr_base(num, "0123456789ABCDEF");
}
