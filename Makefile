
NAME=push_swap
SRC=\
	main.c \
	ft_lstsize.c \
	ft_lstclear.c \
	ft_lstnew.c \
	ft_lstadd_back.c \
	ft_lstlast.c \
	ft_logic_ra.c

CC=cc
CFLAGS=-Wall -Werror -Wextra


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

.PHONY: $(NAME) all
