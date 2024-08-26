SRCS_FILE = main.c\

SRCS = $(addprefix srcs/,$(SRCS_FILE))

OBJ = $(SRCS:.c=.o)

NAME = ft_display_file

%.o: %.c
		cc -c -o $@ $< -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar rc $@ $(OBJ)
		ranlib $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm $(NAME)

all: $(NAME)