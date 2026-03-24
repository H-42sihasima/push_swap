/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:20:10 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/24 13:08:16 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_lstsize(t_node *stack_a)
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
static int	*stack_to_array(t_node **stack_a)
{
	t_node	*current;
	int		*tab;
	int		len;
	int		i;

	if (!stack_a || !*stack_a)
		return (NULL);
	len = ft_lstsize(*stack_a);
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	i = 0;
	current = *stack_a;
	while (current)
	{
		tab[i] = (current)->content;
		i++;
		current = (current)->next;
	}
	return (tab);
}
static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*tab nampiasa malloc et size = ft_lstsize(*stack_a)*/
static int	*ft_tri_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (!tab || size <= 1)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j + 1], &tab[j]);
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_app_index(t_node **stack_a, int *tab, int size)
{
	t_node *tmp;
	int		i;

	if (!stack_a || !*stack_a || !tab || size <= 0)
		return ;
	tmp = *stack_a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->content == tab[i])
			{
				tmp->index = i;
				break;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(tab);
}
