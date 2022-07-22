#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "./libft/libft.h"

# define LOWER_HEXBASE "0123456789abcdef" 
# define UPPER_HEXBASE "0123456789ABCDEF"

int	ft_printf(const char *value, ...);
int	printf_c(int value);
int	printf_nb(int value);
int	printf_p(unsigned long value);
int	printf_s(char *value);
int	printf_u(unsigned int argument);
int	printf_x(unsigned int value, int diff);

#endif
