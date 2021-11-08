NAME = 		libftprintf.a

LIST = 		ft_printf.c ft_putnbr_base.c print_chars.c  print_nums.c utility.c

OBJ =		$(patsubst %.c,%.o,$(LIST))

FLAGS =		-Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@ 

bonus : all

clean :
	@rm -f $(OBJ) $(OBJ_B)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean bonus re
