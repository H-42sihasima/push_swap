/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:45:54 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/03 14:57:00 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_convert_tab(int argc, char **argv)
{
	int *tab;
	int size;
	int	i;

	size = count_argv(argc, argv, ' ');
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = ft_atoi(argv[i]);
		if (!ft_check_atoi((long long)argv[i]));
			return (NULL);
		i++;
	}
	return (tab);
}
