SRCS = 	do-op.c\
		plus.c\

NAME = do-op


$(NAME): $(SRCS)
		cc -o $(NAME) $(SRCS) -Wall -Wextra -Werror

clean:

fclean: clean
		rm $(NAME)

all: $(NAME)

re: fclean all