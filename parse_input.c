/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:04:49 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/25 17:05:12 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	add_to_a(char **str, t_node **stack_a, int i)
{
	long	value;

	value = ft_atol(str[i]);
	if (!check_limits(value) || is_duplicate(*stack_a, value))
		exit_and_clean(str, stack_a);
	add_to_stack(stack_a, (int)value);
}

static void	apply_flag(char *str, t_config *config)
{
	if (ft_strcmp(str, "--simple") == 0)
		config->strat = STRAT_SIMPLE;
	else if (ft_strcmp(str, "--medium") == 0)
		config->strat = STRAT_MEDIUM;
	else if (ft_strcmp(str, "--complex") == 0)
		config->strat = STRAT_COMPLEX;
	else if (ft_strcmp(str, "--adaptive") == 0)
		config->strat = STRAT_ADAPTIVE;
	else if (ft_strcmp(str, "--bench") == 0)
		config->bench_mode = 1;
}

t_node	*parse_input(int argc, char **argv, t_config *config)
{
	t_node	*stack_a;
	char	**str;
	int		i;

	stack_a = NULL;
	str = ft_argv_to_tab(argc, argv, ' ');
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (!(is_flags(str[i]) || is_number(str[i])))
			exit_and_clean(str, &stack_a);
		if (is_number(str[i]))
			add_to_a(str, &stack_a, i);
		if (is_flags(str[i]))
			apply_flag(str[i], config);
		i++;
	}
	ft_free(str);
	return (stack_a);
}
