
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:34:18 by sihasima          #+#    #+#             */
/*   Updated: 2026/03/31 13:34:30 by sihasima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static long	ft_atoi(char *arg)
{
	int		i;
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	if (!ft_check_doublons(arg))
		return (0);
	i = 0;
	while ((arg[i] >= '\t' && arg[i] <= '\r') || (arg[i] == ' '))
		i++;
	if ((arg[i] == '-') || (arg[i] == '+'))
	{
		if (arg[i] == '-')
			sign = -sign;
		i++;
	}
	while ((arg[i] >= '0' && arg[i] <= '9'))
	{
		res = (res * 10) + ((long)arg[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_check_atoi(long arg)
{
	int	number;

	if (!ft_atoi(arg))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (arg <= 2147483647 && arg >= -2147483648)
		number = arg;
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (number);
}
