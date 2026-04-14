/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:01:01 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 12:29:49 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_node **stack_a, t_node **stack_b)
{
	if (stack_a && *stack_a)
		free_stack(*stack_a);
	if (stack_b && *stack_b)
		free_stack(*stack_b);
	write (2, "Error\n", 6);
	exit(1);
}
void	ft_stackadd_back(t_node **stack, t_node *new_node)
{
	t_node *tmp;

	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
		tmp->next = new_node;
	}
}

int	has_duplicate(t_node *stack_a)
{
	t_node *first;
	t_node *comp;

	first = stack_a;
	while (first != NULL)
	{
		comp = first->next;
		while (comp != NULL)
		{
			if (first->content == comp->content)
				return (0);
			else
				comp = comp->next;
		}
		first = first->next;
	}
	return (1);
}

t_node	*parse_input(int argc, char **argv)
{
	t_node *stack_a;
	t_node	*stack_b;
	int i;
	int value;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	/*while (i < argc)
	{
		if (!is_number(argv[i]))
			error_exit(&stack_a, &stack_b);
		if (!check_limits(argv[i]))
			error_exit(&stack_a, &stack_b);
		valeur = ft_atoi(argv[i]);
		add_to_stack(&stack_a, valeur);
		i++;
	}
	if (has_duplicate(stack_a))
		error_exit(&stack_a, &stack_b);
	return (stack_a);
	*/
}
