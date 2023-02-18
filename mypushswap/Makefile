NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

SRCS = create_stack.c max.c min.c parse_args.c push.c rotate_reverse.c rotate.c swap.c utils.c utils1.c utils2.c main.c

CC = cc

OBJ = $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) push_swap.h
		$(CC) $(FLAGS) main.c $(FRAMEWORK) $(OBJ) -o push_swap

clean :
		@rm -rf $(OBJS)

fclean : clean
		@rm -rf $(NAME)

re :	fclean all