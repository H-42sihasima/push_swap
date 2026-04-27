/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_benchmark.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:52:24 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 17:10:46 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	aff_ops_1(t_config *config)
{
	ft_putstr_fd("\n[bench] sa: ", 2);
	ft_putnbr_fd(config->count_sa, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(config->count_sb, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(config->count_ss, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(config->count_pa, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(config->count_pb, 2);
}

static void	aff_ops_2(t_config *config)
{
	ft_putstr_fd("\n[bench] ra: ", 2);
	ft_putnbr_fd(config->count_ra, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(config->count_rb, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(config->count_rr, 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd(config->count_rra, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(config->count_rrb, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(config->count_rrr, 2);
}

void	aff_bench(t_config *config)
{
	ft_putstr_fd("[bench] disorder: ", 2);
	aff_disorder(config->disorder, 2);
	ft_putstr_fd("\n[bench] strategy: ", 2);
	aff_strategy(config);
	ft_putstr_fd("\n[bench] total_ops: ", 2);
	ft_putnbr_fd(config->total_ops, 2);
	aff_ops_1(config);
	aff_ops_2(config);
}
