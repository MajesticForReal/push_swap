/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_100.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:35:28 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/27 23:35:28 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_first_100(t_first *a, t_first *b, int	*sortint, int size)
{
	int	i;
	int	max;
	int	min;

	max = size - 1;
	min = size - (size / 3);
	i = 0;
	while (i < (size / 3))
	{
		if (a->first_stack->nb > sortint[max]
			|| a->first_stack->nb < sortint[min])
			ft_ra(a);
		else if (a->first_stack->nb <= sortint[max]
			&& a->first_stack->nb >= sortint[min])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_mid_100(t_first *a, t_first *b, int *sortint, int size)
{
	int	i;
	int	min;
	int	max;

	max = size - (size / 3) - 1;
	min = size - (size / 3) * 2;
	i = 0;
	while (i < (size / 3))
	{
		if (a->first_stack->nb > sortint[max]
			|| a->first_stack->nb < sortint[min])
			ft_ra(a);
		else if (a->first_stack->nb <= sortint[max]
			&& a->first_stack->nb >= sortint[min])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_last_100(t_first *a, t_first *b, int	*sortint, int size)
{
	int	i;
	int	max;
	int	min;

	max = size - ((size / 3) * 2) - 1;
	min = size - ((size / 3) * 3);
	i = 0;
	while (i < (size / 3))
	{
		if (a->first_stack->nb > sortint[max]
			|| a->first_stack->nb < sortint[min])
			ft_rra(a);
		else if (a->first_stack->nb <= sortint[max]
			&& a->first_stack->nb >= sortint[min])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_rest_100(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	rest;
	int	i;

	ft_min_to_top_rra(a, sortint[size - ((size / 3) * 3)]);
	if (size % 3 == 0)
		return ;
	tier = size / 3;
	rest = size % 3;
	i = 0;
	while (i < rest)
	{
		if (a->first_stack->nb >= sortint[size - (tier * 3)])
			ft_rra(a);
		else if (a->first_stack->nb < sortint[size - (tier * 3)])
		{
			ft_pb(a, b);
			i++;
		}
	}
}
