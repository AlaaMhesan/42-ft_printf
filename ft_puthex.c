#include "ft_printf.h"

int     ft_puthex(unsigned long n, char c)
{
    int     count;

    count = 0;
    if (n > 15)
    {
		count += ft_puthex(n / 16, c);
		count += ft_puthex(n % 16, c);        
    }
    else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else if (c == 'x')
			ft_putchar(n - 10 + 'a');
		else if (c == 'X')
			ft_putchar(n - 10 + 'A');
		count++;
	}
	return (count);
}