/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkolonan <pkolonan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 07:10:27 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/17 07:11:02 by pkolonan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(t_stack *stack_a)
{
	t_stack	*first_a;
	t_stack	*comp;

	if (!stack_a)
		return (0);
	first_a = stack_a;
	while (first_a != NULL)
	{
		comp = first_a->next;
		while (comp != NULL)
		{
			if (first_a->value == comp->value)
				return (0);
			comp = comp->next;
		}
		first_a = first_a->next;
	}
	return (1);
}
