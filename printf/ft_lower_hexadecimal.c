#include "ft_printf.h"

void	ft_lower_hexadecimal(unsigned long long n, int *i)
{
	if (n >= 16)
		ft_lower_hexadecimal(n / 16, i);
	n %= 16;
	if (n >= 9 && n <= 16)
	{
		if (n == 10)
			ft_putchar('a', i);
		if (n == 11)
			ft_putchar('b', i);
		if (n == 12)
			ft_putchar('c', i);
		if (n == 13)
			ft_putchar('d', i);
		if (n == 14)
			ft_putchar('e', i);
		if (n == 15)
			ft_putchar('f', i);
	}
	if (n <= 9)
		ft_putchar(n + '0', i);
	i++;
}
