#include "ft_printf.h"

int ft_putstr(char *s)
{
    if (s == NULL)
        return (ft_putstr("(null)"));
    write (1, s, ft_strlen(s));
    return (ft_strlen(s));
}