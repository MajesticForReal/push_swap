/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_4_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:22:10 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/25 15:22:10 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_first *a, int *sortint)
{
	if (a->first_stack->next->nb == sortint[2]
		&& a->first_stack->next->next->nb == sortint[1])
	{
		ft_sa(a);
		ft_ra(a);
	}
	if (a->first_stack->nb == sortint[1])
	{
		if (a->first_stack->next->nb == sortint[2])
			ft_rra(a);
		else
			ft_sa(a);
	}
	if (a->first_stack->nb == sortint[2])
	{
		if (a->first_stack->next->next->nb == sortint[1])
			ft_ra(a);
		else
		{
			ft_sa(a);
			ft_rra(a);
		}
	}
}

void	ft_sort_4(t_first *a, t_first *b, int *sortint)
{
	while (a->first_stack->nb != sortint[3])
	{
		if (a->first_stack->next->next->next->nb == sortint[3])
			ft_rra(a);
		else
			ft_ra(a);
	}
	ft_pb(a, b);
	ft_sort_3(a, sortint);
	ft_pa(a, b);
	ft_ra(a);
}

void	ft_sort_5(t_first *a, t_first *b, int *sortint)
{
	while (a->first_stack->nb != sortint[4])
	{
		if (a->first_stack->next->next->next->next->nb == sortint[4]
			|| a->first_stack->next->next->next->nb == sortint[4])
			ft_rra(a);
		else
			ft_ra(a);
	}
	ft_pb(a, b);
	ft_sort_4(a, b, sortint);
	ft_pa(a, b);
	ft_ra(a);
}
