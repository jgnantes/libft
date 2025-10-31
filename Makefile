NAME = libft.a

all:
	cc -Wall -Wextra -Werror -c ft_*.c
	ar rcs $(NAME) ft_*.o

clean:
	rm -f *.o

fclean:
	rm -f *.o libft.a

bonus:
	cc -Wall -Wextra -Werror -c ft_*.c
	ar rcs $(NAME) ft_*_bonus.o

re:
	make fclean
	make all
