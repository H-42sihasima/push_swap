/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 07:23:10 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/25 12:52:02 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_stack(t_node **stack, int valeur)
{
	t_node	*new_node;

	new_node = ft_lstnew(valeur);
	if (!new_node)
		free_stack(stack);
	ft_lstadd_back(stack, new_node);
}
