/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:23:05 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/24 14:09:28 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_digit(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			i++;
			if (arg[i] <= 57 && arg[i] >= 48)
				i++;
			else
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		else if (arg[i] <= 57 && arg[i] >= 48)
			i++;
		else
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

static int	ft_check_doublons(char *arg)
{
	int	i;
	int	j;

	if (!ft_check_digit(arg))
		return (0);
	i = 0;
	while (arg[i])
	{
		if (arg[i] == '-' || arg[i] == '+')
			i++;
		j = i + 1;
		while (arg[j])
		{
			if (arg[i] != arg[j])
				j++;
			else
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static long	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	if (!ft_check_doublons(str))
		return (0);
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + ((long)str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_check_atoi(long nbr)
{
	int	number;

	if (nbr <= 2147483647 && nbr >= -2147483648)
		number = nbr;
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (number);
}
