/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:12:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/04/26 19:45:17 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				i;
	char			*arg;
	char			**tab;
	long long int	*res;

	arg = ft_strjoin(argc, argv, " ");
	tab = ft_split(arg, ' ');
	free(arg);
	if (ft_is_number(tab) == 0)
	{
		ft_free(tab);
		ft_putstr("Error");
		return (0);
	}
	res = malloc(sizeof(int) * ft_size(tab));
	if (!res)
		return (0);
	i = 0;
	while (i <= ft_size(tab))
	{
		res[i] = ft_atoi(tab[i]);
		i++;
	}
	i = ft_size(tab);
	if (ft_is_integer(res, i) == 0
		|| ft_is_duplicate(res, i) == 0)
	{
		ft_free(tab);
		free(res);
		ft_putstr("Error");
		return (0);
	}
	ft_free(tab);
	printf("\nOKOK\n");
	free(res);
	return (0);
}
