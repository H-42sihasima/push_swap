/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_algo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:29:17 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/28 12:29:34 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max_bits(t_node **stack_a)
{
	int	size;
	int	max_index;
	int	result;
	int	bits;

	if (!stack_a || !*stack_a)
		return (0);
	size = ft_lstsize(*stack_a);
	max_index = size - 1;
	bits = 0;
	while (size >> bits != 0)
		bits++;
	bits = bits - 1;
	return (bits);
}
