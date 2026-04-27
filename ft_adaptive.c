/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adaptive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:55:20 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 14:59:21 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_adaptive(t_node **stack_a, t_node **stack_b, t_config *config)
{
	float	disorder;

	if (!stack_a || !config)
		return ;
	disorder = compute_disorder(*stack_a);
	config->disorder = disorder;
	if (disorder < 0.2)
		ft_short_simple(stack_a, stack_b, config);
	else if (0.2 <= disorder && disorder < 0.5)
		ft_medium_algo(stack_a, stack_b, config);
	else
		complex_algo(stack_a, stack_b, config);
}
