/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:36:44 by phella            #+#    #+#             */
/*   Updated: 2021/11/27 17:28:32 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
