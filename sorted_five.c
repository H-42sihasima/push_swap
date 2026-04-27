/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:55:47 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 17:20:41 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_five(t_node **stack_a, t_node **stack_b, t_config *config)
{
	int	min_value;
	int	index;

	while (ft_lstsize(*stack_a) > 3)
	{
		min_value = ft_find_min(*stack_a);
		index = ft_get_index(*stack_a, min_value);
		if (index <= 2)
			while ((*stack_a)->content != min_value)
				rra(stack_a, config);
		else
			while ((*stack_a)->content != min_value)
				ra(stack_a, config);
		pb(stack_b, stack_a, config);
	}
	sort_three(stack_a, config);
	while (*stack_b)
		pa(stack_b, stack_a, config);
}
