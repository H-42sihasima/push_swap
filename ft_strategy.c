/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 09:07:51 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/16 10:44:08 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aff_strategy(t_node *stack_a, t_config *config)
{
	float	disorder;

	disorder = aff_disorder(stack_a, 1);
	if (config->strat == STRAT_SIMPLE)
		ft_putstr_fd("Simple / O(n²)\n", 1);
	else if (config->strat == STRAT_MEDIUM)
		ft_putstr_fd("Medium / O(n\xe2\x88\x9an)\n", 1);
	else if (config->strat == STRAT_COMPLEX)
		ft_putstr_fd("Complex / O(n log n)\n", 1);
	else if(config->strat == STRAT_ADAPTIVE)
	{
		if (disorder < 20)
			ft_putstr_fd("Adaptive / O(n²)\n", 1);
		else if (20 <= disorder && disorder < 50)
			ft_putstr_fd("Adaptive / O(n\xe2\x88\x9an)\n", 1);
		else
			ft_putstr_fd("Adaptive / O(n log n)\n", 1);
	}
}

void	chose_method(int argc, char **argv, t_config *config)
{
	int	i;

	i = 1;
	config->strat = STRAT_ADAPTIVE;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "--") == 0)
			config->strat = STRAT_ADAPTIVE;
		else if (argv[i][0] == '-' &&  argv[i][1] == '-')
		{
			if (config->strat == STRAT_ADAPTIVE)
			{
				if (ft_strcmp(argv[i], "--simple") == 0)
					config->strat = STRAT_SIMPLE;
				else if (ft_strcmp(argv[i], "--medium") == 0)
					config->strat = STRAT_MEDIUM;
				else if (ft_strcmp(argv[i], "--complex") == 0)
					config->strat = STRAT_COMPLEX;
				else
					aff_error(argv[i]);
			}
			else
				aff_error(argv[i]);
		}
		i++;
	}
}
