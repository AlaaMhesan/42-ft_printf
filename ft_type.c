#include "ft_printf.h"

int ft_type(char c, va_list arg)
{
    void *ptr;
    
    if (c == 'd' || c == 'i')
        return (ft_putnum(va_arg(arg, int)));
    if (c == 'c')
        return (ft_putchar(va_arg(arg, int)));
    if (c == 's')
        return (ft_putstr(va_arg(arg, char*)));
    if (c == 'u')
        return (ft_putnum_un(va_arg(arg, unsigned int)));
    if (c == 'x' || c == 'X')
        return (ft_puthex(va_arg(arg, unsigned int), c));
    if (c == 'p')
    {
        ptr = va_arg(arg, void *);
        if (ptr == NULL)
            return (ft_putstr("(nil)"));
        ft_putchar('0');
        ft_putchar('x');
        return (ft_puthex((unsigned long)ptr, 'x') + 2);
    }
    if (c == '%')
		return (ft_putchar('%'));
	return (0);
};