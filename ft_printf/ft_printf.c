#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_printf_aux(char value, va_list arg)
{
	int	len;

	if (value == 'c')
		len = printf_c (va_arg (arg, int));
	else
		if (value == 's')
			len = printf_s (va_arg (arg, char *));
	else
		if (value == 'p')
			len = printf_p (va_arg (arg, unsigned long));
	else
		if (value == 'd' || value == 'i')
			len = printf_nb (va_arg (arg, int));
	else
		if (value == 'u')
			len = printf_u (va_arg (arg, unsigned int));
	else
		if (value == 'x' || value == 'X')
			len = printf_x (va_arg (arg, unsigned int), value);
	else
		if (value == '%')
			len = write (1, "%", 1);
	return (len);
}

int	ft_printf(const char *value, ...)
{
	int		len;
	int		i;
	va_list	list;

	i = 0;
	len = 0;
	va_start (list, value);
	while (value[i])
	{
		if (value[i] == '%')
		{
			i++;
			len += ft_printf_aux (value[i], list);
		}
		else
			len += ft_putchar_fd (value[i], 1);
		i++;
	}
	return (len);
}
