/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chose_strategy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:44:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 16:52:32 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(t_node **stack_a, t_node **stack_b, t_config *config)
{
	if (config->strat == STRAT_ADAPTIVE)
		ft_adaptive(stack_a, stack_b, config);
	else if (config->strat == STRAT_SIMPLE)
		ft_short_simple(stack_a, stack_b, config);
	else if (config->strat == STRAT_MEDIUM)
		ft_medium_algo(stack_a, stack_b, config);
	else if (config->strat == STRAT_COMPLEX)
		complex_algo(stack_a, stack_b, config);
}
