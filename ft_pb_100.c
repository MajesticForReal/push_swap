/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:42:56 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:42:56 by anrechai         ###   ########.fr       */
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
		// if (ft_opti_pb(a, sortint[max], sortint[min], size) == 1)
		// 	ft_rra(a);
		// else if (ft_opti_pb(a, sortint[max], sortint[min], size) == 2)
		// 	ft_ra(a);
		if (a->first_stack->nb > sortint[max] || a->first_stack->nb < sortint[min])
			ft_ra(a);
		if (a->first_stack->nb <= sortint[max]
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
		// if (ft_opti_pb(a, sortint[max], sortint[min], size) == 1)
		// 	ft_rra(a);
		// else if (ft_opti_pb(a, sortint[max], sortint[min], size) == 2)
		// 	ft_ra(a);
		if (a->first_stack->nb > sortint[max] || a->first_stack->nb < sortint[min])
			ft_ra(a);
		if (a->first_stack->nb <= sortint[max]
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
		// if (ft_opti_pb(a, sortint[max], sortint[min], size) == 1)
		// 	ft_rra(a);
		// else if (ft_opti_pb(a, sortint[max], sortint[min], size) == 2)
		// 	ft_ra(a);
		if (a->first_stack->nb > sortint[max] || a->first_stack->nb < sortint[min])
			ft_ra(a);
		if (a->first_stack->nb <= sortint[max]
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
