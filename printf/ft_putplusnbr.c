#include "ft_printf.h"

void	ft_putplusnbr(unsigned int n, int *i)
{
	if (n >= 10)
		ft_putnbr(n / 10, i);
	ft_putchar(n % 10 + '0', i);
	i++;
}
