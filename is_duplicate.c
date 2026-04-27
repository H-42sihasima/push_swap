/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:22:07 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 11:24:06 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(t_node *stack_a, int val)
{
	while (stack_a != NULL)
	{
		if (stack_a->content == val)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
