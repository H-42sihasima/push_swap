/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:20:10 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/23 17:20:18 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_node **stack_a)
{
	t_node *current;
	int	*tab;
	int	len;
	int	i;

	if (!stack_a || !*stack_a)
		return (NULL);
	len = ft_lstsize(*stack_a);
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	i = 0;
	current = *stack_a;
	while (current)
	{
		tab[i] = (current)->content;
		i++;
		current = (current)->next;
	}
	return (tab);
}
