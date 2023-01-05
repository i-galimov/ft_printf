# Проект ft_printf (без бонусов)

### 
* [**Makefile**](https://github.com/i-galimov/ft_printf/blob/main/printf/Makefile)
* [**Header**](https://github.com/i-galimov/ft_printf/blob/main/printf/ft_printf.h)
* [**ft_printf**](https://github.com/i-galimov/ft_printf/blob/main/printf/ft_printf.c)
* [**Other**](https://github.com/i-galimov/ft_printf/tree/main/printf)
---
### [Пример кода](https://github.com/i-galimov/ft_printf/blob/main/printf/ft_upper_hexadecimal.c) 
> *Это не баг, а фича*
```
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
```
********
> ***Печать — это наиболее общий для индивидов способ раскрытия их духовного бытия. Она руководствуется уважением не к отдельным личностям, а только к разуму..***
> 
![Печать](http://portulan.ru/wp-content/uploads/2016/08/maxresdefault.jpg)
