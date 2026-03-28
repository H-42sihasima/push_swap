/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_argv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:06:16 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/28 16:22:12 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*compter le nombre dans l argv*/

char	**ft_xf_argv(int argc, char **argv)
{
	int		i;
	int 	k;
	int		j;
	char	**tmp;
	static char	*tab[100];


	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		k = 0;
		if (!tmp)
			return (NULL);
		while (tmp[k])
		{
			tab[j] = tmp[k];
			j++;
			k++;
		}
		free(tmp);
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

