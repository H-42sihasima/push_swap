/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_sa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:59:11 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 10:29:04 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_sa(t_node **stack_a)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!stack_a || !*stack_a || !((*stack_a)->next))
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	last = second->next;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	if (last)
		first->next = last;
	else
		first->next = NULL;
	if (last)
		last->prev = first;
	*stack_a = second;
}
