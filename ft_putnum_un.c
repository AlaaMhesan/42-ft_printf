#include "ft_printf.h"

int     ft_putnum_un(unsigned int n)
{
    int count;

    count = 0;
    if (n > 9)
    {
        count += ft_putnum(n / 10);
        count += ft_putnum(n % 10);
    }
    else
        count += ft_putchar(n + '0');
    return (count);
}