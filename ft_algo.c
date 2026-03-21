/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:49:22 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/21 14:20:52 by sihasima         ###   ########.fr       */
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
