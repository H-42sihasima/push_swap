/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_argv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:06:16 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/28 17:04:32 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*compter le nombre dans l argv*/
static int		ft_count_argv(char *argv, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!argv)
		return (0);
	while (argv[i])
	{
		if (argv[i] != c && ((argv[i + 1] == c) || argv[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	ft_order_len(char **argv)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		count += ft_count_argv(argv[i], ' ');
		i++;
	}
	return (count);
}

char	**ft_xf_argv(int argc, char **argv)
{
	int		i;
	int 	k;
	int		j;
	int		len;
	char	**tmp;
	char	**tab;



	i = 1;
	j = 0;
	len = ft_order_len(argv);
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
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

