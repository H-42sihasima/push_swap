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

static int	ft_find_max_bits(t_node **stack_a)
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

static void	empty_stack_b(t_node **stack_a, t_node**stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	while (*stack_b)
		pa(stack_b, stack_a);
}
void	utils(t_node **stack_a, t_node **stack_b, int index, int size)
{
	int	j;
	int	len_stack;

	j = 0;
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	len_stack = ft_lstsize(*stack_a);
	while (j < len_stack)
	{
		if (((index >> size) & 1) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		j++;
		}
}
void complex_algo(t_node **stack_a, t_node **stack_b)
{
	int	max_bits;
	int	size;
	int	index;
	int	len_stack;
	int	j;

	if (!stack_a || !*stack_a || !stack_b)
		return ;
	max_bits = ft_find_max_bits(stack_a);
	size = 0;
	while (size < max_bits)
	{
		index = (*stack_a)->index;
		j = 0;
		len_stack = ft_lstsize(*stack_a);
		while (j < len_stack)
		{
			if (((index >> size) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		empty_stack_b(stack_a, stack_b);
		size++;
	}
}
