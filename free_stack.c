/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:01:23 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/25 15:06:18 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node **stack)
{
	t_node	*temp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

char	**ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

void	aff_error(char *arg)
{
	(void)arg;
	write(2, "Error\n", 6);
	exit(1);
}

void	exit_and_clean(char **array, t_node **stack_a)
{
	write(2, "Error\n", 6);
	ft_free(array);
	free_stack(stack_a);
	exit(1);
}

void	free_all(t_node **stack_a, t_node **stack_b)
{
	if (stack_a && *stack_a)
		free(stack_a);
	if (stack_b && *stack_b)
		free(stack_b);
	exit(1);
}
