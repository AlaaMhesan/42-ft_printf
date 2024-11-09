#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int counter;

	va_start(arg, str);
	counter = 0;
	i = 0;
	while (str[i] !=  '\0')
	{
		if(str[i] == '%')
		{
			counter += ft_type(str[i++], arg);
			i++;	
		}
		else
		{
			counter += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(arg);
	return(counter);
}

// int	main()
// {
// 	int	result;
// 	result = printf("Alaa akram almhesan");
// 	printf("%d number of ch\n", result );
// }
