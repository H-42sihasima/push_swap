/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:53:08 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/25 17:57:40 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_max(t_node **stack_b)
{
	t_node	*tmp;
	int		max;

	if (!stack_b || !*stack_b)
		return (0);
	tmp = (*stack_b)->next;
	max = (*stack_b)->content;
	while (tmp != NULL)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}
/*	aff_index
	ft_W
	W = ft_calcul_W(stack_a);
*/

void	bring_to_top(t_node **stack_b, int index_max, int valeur_max)
{
	int	taille;
	int	mid;

	// int	index;
	if (!stack_b || !*stack_b)
		return ;
	// min_value = ft_find_min(*stack_a);
	// index = ft_get_min_index(*stack_a);
	taille = ft_lstsize(*stack_b);
	mid = taille / 2;
	while ((*stack_b)->index != valeur_max)
	{
		if ((*stack_b)->index <= mid)
			rb(stack_b);
		else
			rrb(stack_b);
	}
}
void	ft_push_to_B(t_node **stack_a, t_node **stack_b, int W)
{
	int	i;
	int	indice;

	if (!stack_a || !*stack_a || !stack_b)
		return ;
	ft_assign_indexation(stack_a);
	i = 0;
	while (*stack_a)
	{
		indice = (*stack_a)->index;
		if (indice <= i)
		{
			pb(stack_a, stack_b);
			i++;
			rb(stack_b);
		}
		else if (indice < i + W)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	ft_push_to_A(t_node **stack_b, t_node **stack_a)
{
	int	max;
	int	index_max;

	if (!stack_b || !*stack_b)
		return ;
	while (*stack_b)
	{
		max = ft_find_max(stack_b);
		index_max = ft_get_index(stack_b, max);
		bring_to_top(stack_b, index_max, max);
		pa(stack_b, stack_a);
	}
}
