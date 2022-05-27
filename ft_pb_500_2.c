/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_500_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:33:01 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/28 00:32:49 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_6_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if ((a->first_stack->nb < sortint[size - (six * 6)])
			|| (a->first_stack->nb >= sortint[size - (six * 5)]))
			ft_rra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 6)])
			&& (a->first_stack->nb < sortint[size - (six * 5)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_rest_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	rest;
	int	i;

	ft_min_to_top_rra(a, sortint[size - ((size / 6) * 6)]);
	if (size % 6 == 0)
		return ;
	six = size / 6;
	rest = size % 6;
	i = 0;
	while (i < rest)
	{
		if (a->first_stack->nb >= sortint[size - (six * 6)])
			ft_rra(a);
		else if (a->first_stack->nb < sortint[size - (six * 6)])
		{
			ft_pb(a, b);
			i++;
		}
	}
}
