/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_benchmark.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 09:07:51 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/15 16:49:14 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
