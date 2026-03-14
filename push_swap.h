/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:03:12 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 15:33:17 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	// int	index;
	struct s_list	*next;
	// struct list	*prev;
}					t_node;

t_node				*ft_lstnew(int content);
t_node				*ft_lstlast(t_node *stack_a);
// int					ft_check_arg(char *arg);
int					ft_lstsize(t_node *stack_a);
void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstclear(t_node **lst);
void				ft_logic_ra(t_node **stack_a);
// void				ft_logic_pa(t_node **stack_a, t_node **stack_b);
// void				ft_logic_sa(t_node **stack_a);
// void				ft_logic_sb(t_node **stack_b);

// void				ft_logic_rotate(t_node **stack_a);
// void				ft_logic_rra(t_node **stack_a);
// void				ft_logic_pb(t_node **stack_a, t_node **stack_b);

#endif
