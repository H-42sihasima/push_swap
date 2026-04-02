/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:58:34 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/02 16:49:53 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void tab_to_stack(t_node **stack, int *tab, int taille)
{
	int	i;
	t_node *pile;

	if (!stack)
		return ;
	i = 0;
	while (i < taille)
	{
		pile = ft_lstnew(tab[i]);
		if (!pile)
		{
			ft_lstclear(stack);
			return ;
		}
		ft_lstadd_back(stack, pile);
		i++;
	}
}
