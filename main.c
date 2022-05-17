/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:12:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/17 21:31:31 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checker(char **tab, long long int *res, int index, int i)
{
	if (index == 1)
	{
		if (ft_is_number(tab) == 0)
		{
			ft_free(tab);
			free(res);
			ft_putstr("Error\n");
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
			ft_putstr("Error\n");
			return (0);
		}
		return (1);
	}
	return (1);
}

long long int	*ft_fill_tab(long long *res, char **tab)
{
	int	i;

	res = malloc(sizeof(long long int) * ft_size(tab));
	if (!res)
		return (0);
	i = 0;
	while (i < ft_size(tab))
	{
		res[i] = ft_atoi(tab[i]);
		i++;
	}
	return (res);
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

int	main(int argc, char **argv)
{
	char			*arg;
	char			**tab;
	long long int	*res;
	t_first			*a;
	t_first			*b;

	a = ft_initialize_first();
	b = ft_initialize_first();
	if (ft_check_only_space(argc, argv) == 0 || ft_check_argv(argc, argv) == 0)
		return (0);
	arg = ft_strjoin(argc, argv, " ");
	tab = ft_split(arg, ' ');
	free(arg);
	res = NULL;
	if (ft_parsing(tab, res, 0, 0) == 0)
		return (0);
	res = ft_fill_tab(res, tab);
	a = ft_fill_stack(res, a, ft_size(tab));
	ft_pb(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	ft_pb(a, b);
	display(a->first_stack, b->first_stack);
	//display_b(b->first_stack);
	ft_free(tab);
	free(res);
	printf("\nFINI\n");
	return (0);
}
