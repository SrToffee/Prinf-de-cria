#include "ft_printf.h"
#include "./libft/libft.h"

int	printf_s(char *value)
{
	if (value)
		return (ft_putstr_fd (value, 1));
	else
		return (ft_putstr_fd ("(null)", 1));
}
