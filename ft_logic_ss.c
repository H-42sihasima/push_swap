/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:20:15 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/13 11:26:11 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_logic_ss(t_node **stack_a, t_node **stack_b)
{
	ft_logic_sa(stack_a);
	ft_logic_sb(stack_b);
}
