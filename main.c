/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:49:20 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 15:30:26 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
	/*le parsing et autre...*/
	t_config *config;
	t_node	**stack_a;
	t_node	**stack_b;

	init_config(config);
	if (config->strat = STRAT_ADAPTIVE)
		ft_adaptive(*stack_a, config);
	else if (config->strat = STRAT_SIMPLE)
		ft_short_simple(stack_a, stack_b, config);
	else if (config->strat = STRAT_MEDIUM)
		ft_medium_algo(stack_a, stack_a, config);
	else
		complex_algo(stack_a, stack_b, config);
}
