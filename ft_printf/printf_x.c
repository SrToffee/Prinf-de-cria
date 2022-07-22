#include "ft_printf.h"
#include "./libft/libft.h"

static int	convertexa(unsigned int n, int count, char *base)
{
	if (n > 15)
		count = convertexa(n / 16, count, base);
	return (count + write(1, &base[n % 16], 1));
}

int	printf_x(unsigned int value, int diff)
{
	if (value && diff)
	{
		if (diff == 88)
			return (convertexa (value, 0, UPPER_HEXBASE));
		else
			return (convertexa (value, 0, LOWER_HEXBASE));
	}
	else
		return (ft_putstr_fd ("0", 1));
}
