/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:12:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 20:36:27 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	main(int argc, char **argv)
{
	char			*arg;
	char			**tab;
	long long int	*res;
	int				*sortint;
	t_first			*a;

	if (ft_check_only_space(argc, argv) == 0 || ft_check_argv(argc, argv) == 0)
		return (0);
	arg = ft_strjoin(argc, argv, " ");
	tab = ft_split(arg, ' ');
	free(arg);
	res = NULL;
	if (ft_parsing(tab, res, 0, 0) == 0)
		return (0);
	a = ft_initialize_first();
	res = ft_fill_tab(res, tab);
	sortint = NULL;
	sortint = malloc(sizeof(int) * (ft_size(tab)));
	if (!sortint)
		return (0);
	sortint = ft_sort_tab(res, sortint, ft_size(tab));
	a = ft_fill_stack(res, a, ft_size(tab));
	ft_choice(ft_size(tab), a, sortint);
	ft_free_stack(a);
	free(a);
	ft_free(tab);
	free(res);
	free(sortint);
	return (0);
}
