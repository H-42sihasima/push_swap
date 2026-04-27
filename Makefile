# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/01 13:21:40 by sihasima          #+#    #+#              #
#    Updated: 2026/04/25 17:21:27 by sihasima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap

CC=cc
CFLAGS = -Wall -Wextra -Werror

SRCS=\
	check_limits.c ft_atol.c is_flags.c is_number.c is_duplicate.c\
	parse_input.c\
	tr_argv.c\
	ft_substr.c  ft_strcmp.c ft_utils_libft.c ft_utils_stack.c\
	ft_logic_rotate.c ft_logic_rra.c ft_push.c ft_swap.c\
	ft_chose_strategy.c ft_strategy.c ft_init_config.c\
	ft_aff_index.c\
	ft_algo_simple.c ft_complex_algo.c  ft_medium_algo.c ft_adaptive.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_compute_disorder.c ft_w.c\
	free_stack.c add_to_stack.c\
	ft_benchmark.c  main.c is_sorted.c sorted_five.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

HEADER=push_swap.h

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
