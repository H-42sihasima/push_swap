/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chose_strategy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:44:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/16 17:28:07 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(int argc, char **argv, t_config *config)
{
	t_node	**a;
	t_data *stack;

	// stackt->stack_a

	// if (!stack_a || !*stack_a || !stack_b || !a)
	// 	return ;
	stack = NULL;
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	a = NULL;
	stack->stack_a = ft_stack(argc, argv, a);
	init_config(config);
	if (config->strat == STRAT_ADAPTIVE)
		ft_adaptive(stack->stack_a, config);
	else if (config->strat == STRAT_SIMPLE)
		ft_short_simple(&(stack->stack_a), &(stack->stack_b), config);
	else if (config->strat == STRAT_MEDIUM)
		ft_medium_algo(&(stack->stack_a), &(stack->stack_b), config);
	else
		complex_algo(&(stack->stack_a), &(stack->stack_b), config);
}
