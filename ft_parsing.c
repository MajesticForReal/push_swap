/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:10:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/28 00:42:43 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_check_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		if (argv[i][0] == '\0')
		{
			ft_putstr_error("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_only_space(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == ' ')
				k++;
			j++;
		}
		if (k == j)
		{
			ft_putstr_error("Error\n");
			return (0);
		}
		i++;
		j = 0;
		k = 0;
	}
	return (1);
}

int	ft_parsing(char **tab, long long int *res, int i, int j)
{
	i = 0;
	j = 0;
	while (i < ft_size(tab))
	{
		if ((tab[i][j] == '-' || tab[i][j] == '+') && tab[i][j + 1] == '\0')
		{
			ft_free(tab);
			free(res);
			ft_putstr_error("Error\n");
			return (0);
		}
		i++;
	}
	i = 0;
	if (ft_checker(tab, res, 1, i) == 0)
		return (0);
	res = ft_fill_tab(res, tab);
	if (ft_checker(tab, res, 2, i) == 0)
		return (0);
	if (ft_is_already_sort(res, tab) == 0)
		return (0);
	free(res);
	return (1);
}
