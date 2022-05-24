/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_500.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:45:58 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 20:21:29 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb_1_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if (a->first_stack->nb < sortint[size - six])
			ft_ra(a);
		else if (a->first_stack->nb >= sortint[size - six])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_2_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if ((a->first_stack->nb < sortint[size - (six * 2)])
			|| (a->first_stack->nb >= sortint[size - six]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 2)])
			|| (a->first_stack->nb < sortint[size - six]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_3_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if ((a->first_stack->nb < sortint[size - (six * 3)])
			|| (a->first_stack->nb >= sortint[size - (six * 2)]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 3)])
			|| (a->first_stack->nb < sortint[size - (six * 2)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_4_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if ((a->first_stack->nb < sortint[size - (six * 4)])
			|| (a->first_stack->nb >= sortint[size - (six * 3)]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 4)])
			|| (a->first_stack->nb < sortint[size - (six * 3)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_5_500(t_first *a, t_first *b, int	*sortint, int size)
{
	int	six;
	int	i;

	six = size / 6;
	i = 0;
	while (i < six)
	{
		if ((a->first_stack->nb < sortint[size - (six * 5)])
			|| (a->first_stack->nb >= sortint[size - (six * 4)]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 5)])
			|| (a->first_stack->nb < sortint[size - (six * 4)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

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
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (six * 6)])
			|| (a->first_stack->nb < sortint[size - (six * 5)]))
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

	if (size % 6 == 0)
		return ;
	six = size / 6;
	rest = size % 6;
	i = 0;
	while (i < rest)
	{
		if (a->first_stack->nb >= sortint[size - (six * 6)])
			ft_ra(a);
		else if (a->first_stack->nb < sortint[size - (six * 6)])
		{
			ft_pb(a, b);
			i++;
		}
	}
}
