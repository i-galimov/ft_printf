/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:54:15 by phella            #+#    #+#             */
/*   Updated: 2021/11/23 22:46:29 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", i);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', i);
			n *= -1;
		}
		if (n >= 0 && n < 10)
			ft_putchar(n + '0', i);
		if (n >= 10)
		{
			ft_putnbr(n / 10, i);
			ft_putnbr(n % 10, i);
			i++;
		}
	}
}
