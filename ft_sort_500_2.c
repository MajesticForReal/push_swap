/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_500_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:15:13 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/28 00:36:53 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_6_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = size - (six * 5) - 1;
	min = size - (six * 6);
	ft_min_to_top(a, sortint[size - (six * 5)]);
	while (six != 0)
	{
		ft_norme_opti(b, sortint[max], sortint[min], six);
		if (b->first_stack->nb == sortint[max])
		{
			ft_pa(a, b);
			max--;
			six--;
		}
		else if (b->first_stack->nb == sortint[min])
		{
			ft_pa(a, b);
			ft_ra(a);
			six--;
			min++;
		}
	}
}

void	ft_sort_rest_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	max;
	int	six;

	if (b->first_stack == NULL)
		return ;
	six = size / 6;
	max = size - (six * 6) - 1;
	while (b->first_stack != NULL)
	{
		if (b->first_stack->nb == sortint[max])
		{
			ft_pa(a, b);
			max--;
		}
		else
			ft_rb(b);
	}
}

void	ft_norme_opti(t_first *b, int max, int min, int size)
{
	if (ft_opti_sort(b, max, min, size) == 1)
		ft_rrb(b);
	else if (ft_opti_sort(b, max, min, size) == 2)
		ft_rb(b);
}
