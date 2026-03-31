/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_argv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:34:03 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/31 15:53:07 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*char * est un espace , avec int c = ' '(espace) */

static int	ft_count_words(char *argv, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argv[i])
	{
		if (argv[i] != c && ((argv[i + 1] == c) || argv[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int count_argv(int argc, char **argv, int c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count += ft_count_words(argv[i], c);
		i++;
	}
	return (count);
}

char	**ft_xf_argv(int argc, char **argv)
{
	int		i;
	int		k;
	int		i;
	int		len;
	char	**tmp;
	char	**tab;

	i = 1;
	i = 0;
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
			tab[i] = tmp[k];
			i++;
			k++;
		}
		free(tmp);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
