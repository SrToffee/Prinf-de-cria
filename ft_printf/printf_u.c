#include "ft_printf.h"
#include "./libft/libft.h"

static unsigned int	convertexa(unsigned int n, int count, char *base)
{
	if (n > 9)
		count = convertexa(n / 10, count, base);
	return (count + write(1, &base[n % 10], 1));
}

int	printf_u(unsigned int argument)
{
	return (convertexa (argument, 0, "0123456789"));
}
