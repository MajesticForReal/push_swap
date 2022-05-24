/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:42:19 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:42:19 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_first_100(t_first *a, t_first *b, int *sortint, int size)
{
	int	tier;
	int	max;
	int	min;

	tier = size / 3;
	max = size - 1;
	min = size - tier;
	while (tier != 0)
	{
		if (b->first_stack->nb == sortint[max])
		{
			ft_pa(a, b);
			max--;
			tier--;
		}
		else if (b->first_stack->nb == sortint[min])
		{
			ft_pa(a, b);
			ft_ra(a);
			tier--;
			min++;
		}
		else
			ft_rb(b);
	}
}

void	ft_sort_mid_100(t_first *a, t_first *b, int *sortint, int size)
{
	int	tier;
	int	max;
	int	min;

	tier = size / 3;
	max = (size - tier) - 1;
	min = size - (tier * 2);
	ft_min_to_top(a, sortint[size - tier]);
	while (tier != 0)
	{
		if (b->first_stack->nb == sortint[max])
		{
			ft_pa(a, b);
			max--;
			tier--;
		}
		else if (b->first_stack->nb == sortint[min])
		{
			ft_pa(a, b);
			ft_ra(a);
			tier--;
			min++;
		}
		else
			ft_rb(b);
	}
}

void	ft_sort_last_100(t_first *a, t_first *b, int *sortint, int size)
{
	int	tier;
	int	max;
	int	min;

	tier = size / 3;
	max = size - (tier * 2) - 1;
	min = size - (tier * 3);
	ft_min_to_top(a, sortint[size - (tier * 2)]);
	while (tier != 0)
	{
		if (b->first_stack->nb == sortint[max])
		{
			ft_pa(a, b);
			max--;
			tier--;
		}
		else if (b->first_stack->nb == sortint[min])
		{
			ft_pa(a, b);
			ft_ra(a);
			tier--;
			min++;
		}
		else
			ft_rb(b);
	}
	ft_min_to_top(a, sortint[size - ((size / 3) * 3)]);
}

void	ft_sort_rest_100(t_first *a, t_first *b, int *sortint, int size)
{
	int	max;
	int	tier;

	if (b->first_stack == NULL)
		return ;
	tier = size / 3;
	max = size - (tier * 3) - 1;
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

int	*ft_sort_tab(long long int *res, int *sortint, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		sortint[i] = res[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sortint[i] > sortint[j])
			{
				tmp = sortint[j];
				sortint[j] = sortint[i];
				sortint[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sortint);
}
