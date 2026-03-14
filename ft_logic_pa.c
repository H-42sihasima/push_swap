/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:02:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 15:19:24 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_a || !*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	// if (*stack_a)
	// 	(*stack_a)->prev = NULL;
	tmp->next = *stack_b;
	// tmp->prev = NULL;
	// if (*stack_b)
	// 	(*stack_b)->prev = tmp;
	(*stack_b) = tmp;
}
