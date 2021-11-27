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
