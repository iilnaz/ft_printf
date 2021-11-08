#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	define_a_type_specifier(char spec, int *count, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_putnbr_base(unsigned long long nbr, char *base);
void	check_num(long int nbr, char *base, int *count);
void	make_if_di(int *count, va_list arg);
void	make_if_p(int *count, va_list arg);
void	make_if_u(int *count, va_list arg);
void	make_if_x(int *count, va_list arg);
void	make_if_x_upper(int *count, va_list arg);
void	make_if_c(int *count, va_list arg);
void	make_if_s(int *count, va_list arg);
int		ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
