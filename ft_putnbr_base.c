#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;
	int	help;

	i = 0;
	size_base = 0;
	while (base[size_base])
		size_base++;
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (nbr)
	{
		nbr_final[i] = nbr % size_base;
		nbr = nbr / size_base;
		i++;
	}
	help = i;
	while (--i >= 0)
		ft_putchar_fd(base[nbr_final[i]], 1);
	return (help);
}

void	check_num(long int nbr, char *base, int *count)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		*count += 1;
		nbr *= -1;
	}
	*count += ft_putnbr_base(nbr, base);
}
