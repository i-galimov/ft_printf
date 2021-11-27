/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:54:19 by phella            #+#    #+#             */
/*   Updated: 2021/11/27 17:35:41 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *i)
{	
	int	count;

	count = 0;
	if (!s)
		s = "(null)\0";
	while (s[count])
		count++;
	write(1, s, count);
	*i += count;
}
