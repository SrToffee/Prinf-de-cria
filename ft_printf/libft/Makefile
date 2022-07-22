
lib = libft.h
NAME = libft.a
libcreation = ar -rcs
libupdate = ranlib
source = ft_strlen.c		\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	
compile = gcc
rm = rm -f

objects = $(source:.c=.o)



$(NAME): $(objects) $(lib)
	$(libcreation) $(NAME) $(objects)
	$(libupdate) $(NAME)
.c.o:
	$(compile)   -c $< -o $(<:.c=.o) 

all: 
	$(NAME)
clean:
	$(rm) *.o
fclean: clean
	$(rm) $(NAME)
re: fclean all
