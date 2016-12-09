NAME =libft.a
SRC_DIR = srcs/
INCLUDES_DIR = includes/
FUNCTIONS=
FLAGS=-Wall -Wextra -Werror
BINS = $(patsubst %,%.o,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

$(BINS):
	gcc -I$(INCLUDES_DIR) $(FLAGS) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(BINS)
	ar ruv $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
