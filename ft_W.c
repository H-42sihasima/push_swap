/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_W.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:05:47 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/24 16:50:14 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sqrt(int nbr)
{
	int	i;

	i = 1;
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return (i);
		i++;
	}
	return (i - 1);
}

int	ft_calcule_W(t_node **stack_a)
{
	float	coef;
	int		size;
	int		W;

	if (!stack_a || !*stack_a)
		return (0);
	coef = 1.5;
	size = ft_lstsize(*stack_a);
	W = (int)(ft_sqrt(size) * coef);
	return (W);
}
