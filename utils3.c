/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:10:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/05 22:10:51 by anrechai         ###   ########.fr       */
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

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	tab = NULL;
	return ;
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
			ft_putstr("Error\n");
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
			ft_putstr("Error\n");
			return (0);
		}
		i++;
		j = 0;
		k = 0;
	}
	return (1);
}
