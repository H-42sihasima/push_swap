/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_ra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:22:06 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 10:23:33 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_ra(t_node **stack_a)
{
	t_node	*first;
	t_node	*nw_head;
	t_node	*last;

	if (!stack_a || !*stack_a || (!((*stack_a)->next)))
		return ;
	first = *stack_a;
	nw_head = first->next;
	last = ft_lstlast(*stack_a);

	*stack_a = nw_head;
	//nw_head->prev = NULL;
	first->next = NULL;
	//first->prev = last;
	last->next = first;
}
