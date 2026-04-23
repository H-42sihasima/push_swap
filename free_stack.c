/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:01:23 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/23 17:37:52 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack *temp;

	if (!stack || !*stack)
		return ;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

char	**ft_free(char **array, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

void aff_error(char *arg)
{
	write(2, "Error\n", 6);
	exit(1);
}

void exit_and_clean(char **array, t_stack *stack_a, int i)
{
	ft_free(array, i);
	free(stack_a);
	write(2, "Error\n", 5);
	exit(1);
}
