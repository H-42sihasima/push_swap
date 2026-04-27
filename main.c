/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:49:20 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/25 16:54:07 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_config	config;
	t_node		*stack_a;
	t_node		*stack_b;

	if (argc < 2)
		return (0);
	init_config(&config);
	stack_a = parse_input(argc, argv, &config);
	stack_b = NULL;
	if (stack_a == NULL)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	config.disorder = compute_disorder(stack_a);
	if (!is_sorted(&stack_a))
		strategy(&stack_a, &stack_b, &config);
	if (config.bench_mode)
		aff_bench(&config);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
