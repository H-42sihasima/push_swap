/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_rra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:31:50 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 11:00:53 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_rra(t_node **stack_a)
{
	t_node	*first;
	t_node	*nw_last;
	t_node	*nw_first;

	if (!stack_a || !*stack_a || !((*stack_a)->next))
		return ;
	first = *stack_a;
	nw_first = ft_lstlast(*stack_a);
	nw_last = nw_first->prev;
	if (nw_first)
		nw_first->prev = NULL;
	nw_first->next = first;
	first->prev = nw_first;
	if (nw_last)
		nw_last->next = NULL;
	*stack_a = nw_first;
}
