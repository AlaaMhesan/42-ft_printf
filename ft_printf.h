#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int     ft_printf(const char *str, ...);

int ft_type(char c, va_list arg);
int     ft_putchar(char c);
int     ft_strlen(char *str);
int ft_putstr(char *s);
int    ft_putnum(int n);
int     ft_putnum_un(unsigned int n);
int     ft_puthex(unsigned long n, char c);

#endif