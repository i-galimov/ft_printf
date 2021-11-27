#include "ft_printf.h"

void	ft_upper_hexadecimal(unsigned long long n, int *i)
{
	if (n >= 16)
		ft_upper_hexadecimal(n / 16, i);
	n %= 16;
	if (n >= 9 && n <= 16)
	{
		if (n == 10)
			ft_putchar('A', i);
		if (n == 11)
			ft_putchar('B', i);
		if (n == 12)
			ft_putchar('C', i);
		if (n == 13)
			ft_putchar('D', i);
		if (n == 14)
			ft_putchar('E', i);
		if (n == 15)
			ft_putchar('F', i);
	}
	if (n <= 9)
		ft_putchar(n + '0', i);
	i++;
}
