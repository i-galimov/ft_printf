#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int i;
    int j;
    i = ft_printf("%d\n", 347);
    j = printf("%d\n", 347);
    printf("%d\n", i);
    printf("%d\n", j);
}
