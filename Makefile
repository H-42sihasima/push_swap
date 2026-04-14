# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/01 13:21:40 by sihasima          #+#    #+#              #
#    Updated: 2026/04/14 13:08:36 by sihasima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap.a

CC=cc
CFLAGS = -Wall -Wextra -Werror

SRCS=\
	ft_aff_index.c  ft_algo_simple.c  ft_check_arg.c \
	ft_complex_algo.c  ft_logic_rotate.c  ft_medium_algo.c \
	ft_push.c ft_tab_to_stack.c\
	ft_substr.c  ft_swap.c ft_utils_libft.c\
	ft_utils_stack.c ft_compute_disorder.c\
	ft_W.c  tr_argv.c ft_adaptive.c config.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

HEADER=push_swap.h

$(NAME): $(OBJS) $(HEADER)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
