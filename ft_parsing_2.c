/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:59:06 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/28 00:42:21 by anrechai         ###   ########.fr       */
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

int	ft_is_already_sort(long long *res, char **tab)
{
	int	size;
	int	i;
	int	j;

	size = ft_size(tab);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (res[i] > res[j])
				return (1);
			j++;
		}
		i++;
	}
	ft_free(tab);
	free(res);
	return (0);
}

int	ft_checker(char **tab, long long int *res, int index, int i)
{
	if (index == 1)
	{
		if (ft_is_number(tab) == 0)
		{
			ft_free(tab);
			free(res);
			ft_putstr_error("Error\n");
			return (0);
		}
		return (1);
	}
	else if (index == 2)
	{
		i = ft_size(tab) - 1;
		if (ft_is_duplicate(res, i) == 0
			|| ft_is_integer(res, i) == 0)
		{
			ft_free(tab);
			free(res);
			ft_putstr_error("Error\n");
			return (0);
		}
		return (1);
	}
	return (1);
}
