#include "ft_printf.h"
#include "./libft/libft.h"

static int	convertexa(unsigned long long n, int count, char *base)
{
	if (n > 9)
		count = convertexa(n / 10, count, base);
	return (count + write(1, &base[n % 10], 1));
}

int	printf_nb(int value)
{
	int	signal;
	int	count;

	signal = 1;
	count = 0;
	if (value == -2147483648)
	{
		count += ft_putchar_fd ('-', 1);
		count += ft_putchar_fd ('2', 1);
		value = 147483648;
	}
	if (value < 0)
	{
		signal = -1;
		count += write(1, "-", 1);
	}
	return (count + convertexa ((value * signal), 0, "0123456789"));
}
