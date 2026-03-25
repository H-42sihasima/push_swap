/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:53:08 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/25 15:18:19 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	aff_index
	ft_W
	W = ft_calcul_W(stack_a);
*/
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
