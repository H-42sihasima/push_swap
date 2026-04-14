/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:45:54 by sihasima          #+#    #+#             */
/*   Updated: 2026/04/14 13:00:29 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_convert_tab(int argc, char **argv, int size)
{
	int	*tab;
	int	size;
	int	i;

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = ft_atoi(argv[i]);
		if (!ft_check_atoi((long long)tab[i]))
			return (NULL);
		i++;
	}
	return (tab);
}

int	*ft_tab(int argc, char **argv, int size)
{
	int i;
	int *tab;

	i = 0;
	tab = ft_convert_tab(argc, argv, size);
	while (i < argc)
	{
		if (!ft_check_doublons(tab, size))
			return (NULL);
		i++;
	}
	return (tab);
}
