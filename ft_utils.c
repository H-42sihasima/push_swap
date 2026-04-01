/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:08:14 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/14 17:10:19 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*ptr;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}


void	ft_lstclear(t_node **lst)
{
	t_node	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

t_node	*ft_lstlast(t_node *stack_a)
{
	t_node	*tmp;

	if (!stack_a)
		return (NULL);
	tmp = stack_a;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

t_node	*ft_lstnew(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}


int	ft_lstsize(t_node *stack_a)
{
	t_node	*ptr;
	int		count;

	ptr = stack_a;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


static int	ft_count_nb(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ordre_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static void	ft_fill_tab(char **tab, char const *s, char c, size_t count_word)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < count_word)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, ordre_len(s, c));
		if (!tab)
		{
			j = 0;
			while (j < i - 1)
			{
				free(tab[j]);
				j++;
			}
			free(tab);
			return ;
		}
		s += ordre_len(s, c);
		i++;
	}
	tab[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_mots;

	if (!s)
		return (NULL);
	nb_mots = ft_count_nb(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_mots + 1));
	if (!tab)
		return (NULL);
	ft_fill_tab(tab, s, c, nb_mots);
	return (tab);
}
