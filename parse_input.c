/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:04:49 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/23 17:39:40 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse_input(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**str;
	int		i;
	long	valeur;
	int		count;

	stack_a = NULL;
	count = count_argv(argc, argv, ' ');
	str = ft_argv_to_tab(argc, argv, ' ');
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (!ft_check_arg(&str[i], i))
			exit_and_clean(str, stack_a, i);
		if (is_number(str[i]))
		{
			valeur = ft_atol(str[i]);
			if (!check_limits(valeur))
				exit_and_clean(str, stack_a, i);
			add_to_stack(&stack_a, (int)valeur);
		}
		else
			exit_and_clean(str, stack_a, i);
		i++;
	}
	if (!(has_duplicates(stack_a)))
		exit_and_clean(str, stack_a, i);
	ft_free(str, count);
	return (stack_a);
}
