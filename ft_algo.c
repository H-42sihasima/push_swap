/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:49:22 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/21 17:46:49 by sihasima         ###   ########.fr       */
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
int	ft_get_min_index(t_node *stack_a)
{
	int		index;
	int		min_value;
	t_node	*tmp;

	if (!stack_a)
		return (0);
	min_value = ft_find_min(stack_a);
	tmp = stack_a;
	index = 0;
	while (tmp != NULL)
	{
		if (tmp->content == min_value)
			return (index);
		tmp = tmp->next;
		index++;
	}
	return (0);
}

void	bring_to_top(t_node **stack_a)
{
	int	min_value;
	int	taille;
	int	index;
	int	mid;

	if (!stack_a || !*stack_a)
		return ;
	min_value = ft_find_min(*stack_a);
	index = ft_get_min_index(*stack_a);
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
