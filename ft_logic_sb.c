/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_sb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:57:19 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 10:59:20 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_sb(t_node **stack_b)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!stack_b || !*stack_b || !((*stack_b)->next))
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
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
	*stack_b = second;
}
