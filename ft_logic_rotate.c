/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:22:06 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 17:05:20 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_logic_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*nw_head;
	t_node	*last;

	if (!stack || !*stack || (!((*stack)->next)))
		return ;
	first = *stack;
	nw_head = first->next;
	last = ft_lstlast(*stack);
	*stack = nw_head;
	first->next = NULL;
	last->next = first;
}

void	ra(t_node **a)
{
	ft_logic_rotate(a);
}

void	rb(t_node **b)
{
	ft_logic_rotate(b);
}

void	rr(t_node **a, t_node **b)
{
	ft_logic_rotate(a);
	ft_logic_rotate(b);
}
