/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_simple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:49:22 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/26 14:09:51 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_node *stack_a)
{
	t_node	*tmp;
	int		min;

	if (!stack_a)
		return (0);
	min = stack_a->content;
	tmp = stack_a->next;
	while (tmp != NULL)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}
int	ft_get_index(t_node *stack_a, int value)
{
	int		index;
	t_node	*tmp;

	if (!stack_a)
		return (0);
	tmp = stack_a;
	index = 0;
	while (tmp != NULL)
	{
		if (tmp->content == value)
			return (index);
		tmp = tmp->next;
		index++;
	}
	return (0);
}

void	bring_to_top(t_node **stack_a, int min_value, int index)
{
	int	min_value;
	int	taille;
	int	mid;

	if (!stack_a || !*stack_a)
		return ;
	taille = ft_lstsize(*stack_a);
	mid = taille / 2;
	while ((*stack_a)->content != min_value)
	{
		if (index <= mid)
			ra(stack_a);
		else
			rra(stack_a);
	}
}

void	sort_three(t_node **stack_a)
{
	int	top;
	int	Middle;
	int	Bottom;

	if (!stack_a || !*stack_a || !((*stack_a)->next) || !((*stack_a)->next->next))
		return ;
	top = (*stack_a)->content;
	Middle = (*stack_a)->next->content;
	Bottom = (*stack_a)->next->next->content;
	if (top > Middle && top > Bottom)
		ra(stack_a);
	else if (top < Middle && Middle > Bottom)
		rra(stack_a);

	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

void ft_short_simple(t_node **stack_a, t_node **stack_b)
{
	int	stack_len;
	int	min_value;
	int	index;

	if (!stack_a || !*stack_a || !stack_b)
		return ;
	stack_len = ft_lstsize(*stack_a);
	min_value = ft_find_min(stack_a);
	index = ft_get_index(*stack_a, min_value);
	while (stack_len > 3)
	{
		bring_to_top(stack_a, min_value, index);
		pb(stack_a, stack_b);
		stack_len--;
	}
	sort_three(stack_a);
	while (*stack_b != NULL)
		pa(stack_b, stack_a);
}
