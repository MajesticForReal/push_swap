/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:59:06 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/04 16:07:13 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_number(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (ft_strlen(tab[i]) >= 12)
			return (0);
		if (tab[i][j] == '-' || tab[i][j] == '+')
				j++;
		while (tab[i][j])
		{
			if (tab[i][j] > '9' || tab[i][j] < '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_integer(long long int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (tab[i] < -2147483648 || tab[i] > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_duplicate(long long int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
