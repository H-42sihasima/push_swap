/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 09:07:51 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 17:15:13 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aff_strategy(t_config *config)
{
	if (config->strat == STRAT_SIMPLE)
		ft_putstr_fd("Simple / O(n²)", 2);
	else if (config->strat == STRAT_MEDIUM)
		ft_putstr_fd("Medium / O(n\xe2\x88\x9an)", 2);
	else if (config->strat == STRAT_COMPLEX)
		ft_putstr_fd("Complex / O(n log n)", 2);
	else if (config->strat == STRAT_ADAPTIVE)
	{
		if (config->disorder < 0.2)
			ft_putstr_fd("Adaptive / O(n²)", 2);
		else if (0.2 <= config->disorder && config->disorder < 0.5)
			ft_putstr_fd("Adaptive / O(n\xe2\x88\x9an)", 2);
		else
			ft_putstr_fd("Adaptive / O(n log n)", 2);
	}
}
