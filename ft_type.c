#include "ft_printf.h"

int ft_type(char c, va_list arg)
{
    void *Ptr;
    
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
    
}