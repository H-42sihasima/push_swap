/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:02:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 17:02:27 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	(*b) = tmp;
}
void	pa(t_node **stack_a, t_node **stack_b)
{
	ft_push(&stack_a, &stack_b);
}
void	pb(t_node **stack_b, t_node **stack_a)
{
	ft_push(&stack_b, &stack_a);
}
