/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:20:16 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/19 14:07:25 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;

}					t_node;
void				ft_lstadd_back(t_node **lst, t_node *new);
void				ft_lstclear(t_node **lst);
t_node				*ft_lstlast(t_node *stack_a);
t_node				*ft_lstnew(int content);
int					ft_lstsize(t_node *stack_a);
void				rb(t_node **b);
void				ra(t_node **a);
void				rr(t_node **a, t_node **b);
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_b, t_node **stack_a);
void				sa(t_node *stack_a);
void				sb(t_node *stack_b);
void				ss(t_node *stack_a, t_node *stack_b);

#endif
