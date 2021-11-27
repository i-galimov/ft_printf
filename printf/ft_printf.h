#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include   <stdarg.h>

// functions
void	ft_putchar(char c, int *i);
void	ft_putnbr(int n, int *i);
void	ft_putstr(char *s, int *i);
int		ft_printf(const char *format, ...);
void	ft_upper_hexadecimal(unsigned long long n, int *i);
void	ft_lower_hexadecimal(unsigned long long n, int *i);
void	ft_putpointer(unsigned long long n, int *i);
void	ft_putplusnbr(unsigned int n, int *i);
void	ft_define_print(const char *format, va_list ap, int *i);

#endif
