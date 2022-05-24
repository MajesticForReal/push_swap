/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:42:09 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 20:52:35 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_1_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = size - 1;
	min = size - six;
	while (six != 0)
	{
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
		else
			ft_rb(b);
	}
}

void	ft_sort_2_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = (size - six) - 1;
	min = size - (six * 2);
	ft_min_to_top(a, sortint[size - six]);
	while (six != 0)
	{
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
		else
			ft_rb(b);
	}
}

void	ft_sort_3_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = (size - six * 2) - 1;
	min = size - (six * 3);
	ft_min_to_top(a, sortint[size - six * 2]);
	while (six != 0)
	{
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
		else
			ft_rb(b);
	}
}

void	ft_sort_4_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = (size - six * 3) - 1;
	min = size - (six * 4);
	ft_min_to_top(a, sortint[size - six * 3]);
	while (six != 0)
	{
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
		else
			ft_rb(b);
	}
}

void	ft_sort_5_500(t_first *a, t_first *b, int *sortint, int size)
{
	int	six;
	int	max;
	int	min;

	six = size / 6;
	max = (size - six * 4) - 1;
	min = size - (six * 5);
	ft_min_to_top(a, sortint[size - six * 4]);
	while (six != 0)
	{
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
		else
			ft_rb(b);
	}
}

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
		else
			ft_rb(b);
	}
	ft_min_to_top(a, sortint[size - ((size / 6) * 6)]);
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
