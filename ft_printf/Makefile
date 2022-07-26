
lib = libft.h
NAME = libftprintf.a
libcreation = ar rcs
libupdate = ranlib
source = ft_printf.c	\
		  printf_c.c	\
		  printf_nb.c	\
		  printf_p.c	\
		  printf_s.c	\
		  printf_u.c	\
		  printf_x.c		
compile = gcc
rm = rm -f
flags = -Wall -Wextra -Werror

libft_Dir = ./libft
libft = libft.a


objects = $(source:%.c=%.o)



$(NAME): $(objects) 
	make -C $(libft_Dir)
	cp $(libft_Dir)/$(libft) $(NAME)
	$(libcreation) $(NAME) $(objects)

$(objects): $(source)
	$(compile) $(flags)  -c $(source)

all: 
	$(NAME)

clean:
	$(rm) *.o $(libft_Dir)/*.o
fclean: clean
	$(rm) $(NAME) $(libft_Dir)/$(libft) a.out
re: fclean $(NAME)
