#include "ft_printf.h"

int    ft_putnum(int n)
{
    int count;

    count = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        n = -n;
        count += ft_putchar('-');
    }
    if (n > 9)
    {
        count += ft_putnum(n / 10);
        count += ft_putnum(n % 10);
    }
    else
        count += ft_putchar(n + '0');
    return (count);
}