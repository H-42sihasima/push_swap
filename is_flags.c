/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:41:59 by pkolonan          #+#    #+#             */
/*   Updated: 2026/04/25 17:11:41 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_flags(char *arg)
{
	if (ft_strcmp(arg, "--simple") == 0)
		return (1);
	else if (ft_strcmp(arg, "--medium") == 0)
		return (1);
	else if (ft_strcmp(arg, "--complex") == 0)
		return (1);
	else if (ft_strcmp(arg, "--adaptive") == 0)
		return (1);
	else if (ft_strcmp(arg, "--bench") == 0)
		return (1);
	else
		return (0);
}
