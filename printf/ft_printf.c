/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:36:00 by phella            #+#    #+#             */
/*   Updated: 2021/11/27 17:41:54 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_define_print(const char *format, va_list ap, int *i)
{
	if (*format == 'c')
		ft_putchar(va_arg(ap, int), i);
	else if (*format == 's')
		ft_putstr(va_arg(ap, char *), i);
	else if (*format == 'p')
		ft_putpointer(va_arg(ap, unsigned long long), i);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(ap, int), i);
	else if (*format == 'u')
		ft_putplusnbr(va_arg(ap, unsigned int), i);
	else if (*format == 'x')
		ft_lower_hexadecimal(va_arg(ap, unsigned int), i);
	else if (*format == 'X')
		ft_upper_hexadecimal(va_arg(ap, unsigned int), i);
	else if (*format == '%')
		ft_putchar('%', i);
	else
	{
		write(1, format, 1);
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			i++;
		}
		if (*format == '%')
		{
			ft_define_print(++format, ap, &i);
			format++;
		}
	}
	va_end(ap);
	return (i);
}
