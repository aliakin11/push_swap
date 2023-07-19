NAME            =   push_swap

SRC				=	index.c main.c radix.c sort_stack.c sort_utils.c stack_functions.c stack.c ft_atoi.c error_utils.c ft_memcpy.c push_rotate.c reverse_rotate.c init_and_free.c


OBJ = $(SRC:.c=.o)

CC				=	gcc
RM 				=	rm -rf
CFLAGS			= 	-Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all fclean re bonus