all:
	cc -Wall -Wextra -Werror -c ft_*.c
	ar rcs libft.a ft_*.o

clean:
	rm -f *.o

fclean:
	rm -f *.o libft.a

re:
	make fclean
	make all
