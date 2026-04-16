/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_strategy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:44:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/16 09:47:10 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(int argc, char **argv, t_config *config)
{
	t_node	**a;
	t_node	**stack_a;
	t_node	*stack_b;

	if (!stack_a || !stack_b)
		return (0);
	// disorder = compute_disorder(stack_a);
	stack_a = ft_stack(argc, argv, a);
	init_config(config);
	if (config->strat = STRAT_ADAPTIVE)
		ft_adaptive(stack_a, config);
	else if (config->strat = STRAT_SIMPLE)
		ft_short_simple(stack_a, stack_b, config);
	else if (config->strat = STRAT_MEDIUM)
		ft_medium_algo(stack_a, stack_a, config);
	else
		complex_algo(stack_a, stack_b, config);
}
