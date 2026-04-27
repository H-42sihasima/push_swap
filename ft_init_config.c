/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_config.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:10:54 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 16:19:45 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_config(t_config *config)
{
	config->count_sa = 0;
	config->count_sb = 0;
	config->count_ss = 0;
	config->count_pa = 0;
	config->count_pb = 0;
	config->count_ra = 0;
	config->count_rb = 0;
	config->count_rr = 0;
	config->count_rra = 0;
	config->count_rrb = 0;
	config->count_rrr = 0;
	config->total_ops = 0;
	config->disorder = 0.0;
	config->strat = STRAT_ADAPTIVE;
	config->bench_mode = 0;
}
