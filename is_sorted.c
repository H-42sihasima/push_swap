/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:40:39 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/25 17:12:49 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **stack_a)
{
	t_node	*new;

	if (!stack_a)
		return (0);
	new = *stack_a;
	while (new->next != NULL)
	{
		if (new->content > (new->next->content))
			return (0);
		else
			new = new->next;
	}
	return (1);
}
