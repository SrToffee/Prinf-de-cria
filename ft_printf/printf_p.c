#include "ft_printf.h"
#include "./libft/libft.h"

static int	convertexa(unsigned long n, int count, char *base)
{
	if (n > 15)
		count = convertexa(n / 16, count, base);
	return (count + write(1, &base[n % 16], 1));
}

int	printf_p(unsigned long value)
{
	if (value)
		return (write (1, "0x", 2) + convertexa(value, 0, "0123456789abcdef"));
	else
		return (ft_putstr_fd ("(nil)", 1));
}
