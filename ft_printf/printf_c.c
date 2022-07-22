#include "ft_printf.h"
#include "./libft/libft.h"

int	printf_c(int value)
{
	return (ft_putchar_fd (value, 1));
}
