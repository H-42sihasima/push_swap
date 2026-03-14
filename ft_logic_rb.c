/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_rb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:22:06 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 10:27:45 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_rb(t_node **stack_b)
{
	t_node	*first;
	t_node	*nw_head;
	t_node	*last;

	if (!stack_b || !*stack_b || (!((*stack_b)->next)))
		return ;
	first = *stack_b;
	nw_head = first->next;
	last = ft_lstlast(*stack_b);
	*stack_b = nw_head;
	nw_head->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
}
