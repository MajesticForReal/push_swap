/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:01 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/27 23:21:43 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_choice(int size, t_first *a, int *sortint)
{
	t_first			*b;

	b = ft_initialize_first();
	if (size == 2)
		ft_sa(a);
	else if (size == 3)
		ft_sort_3(a, sortint);
	else if (size == 4)
		ft_sort_4(a, b, sortint);
	else if (size == 5)
		ft_sort_5(a, b, sortint);
	else if (size >= 6 && size <= 100)
		ft_sort_100(a, b, sortint, size);
	else if (size > 100)
		ft_sort_500(a, b, sortint, size);
	free(b);
}

void	ft_sort_100(t_first *a, t_first *b, int *sortint, int size)
{
	ft_pb_first_100(a, b, sortint, size);
	ft_sort_first_100(a, b, sortint, size);
	ft_pb_mid_100(a, b, sortint, size);
	ft_sort_mid_100(a, b, sortint, size);
	ft_pb_last_100(a, b, sortint, size);
	ft_sort_last_100(a, b, sortint, size);
	ft_pb_rest_100(a, b, sortint, size);
	ft_sort_rest_100(a, b, sortint, size);
}

void	ft_sort_500(t_first *a, t_first *b, int *sortint, int size)
{
	ft_pb_1_500(a, b, sortint, size);
	ft_sort_1_500(a, b, sortint, size);
	ft_pb_2_500(a, b, sortint, size);
	ft_sort_2_500(a, b, sortint, size);
	ft_pb_3_500(a, b, sortint, size);
	ft_sort_3_500(a, b, sortint, size);
	ft_pb_4_500(a, b, sortint, size);
	ft_sort_4_500(a, b, sortint, size);
	ft_pb_5_500(a, b, sortint, size);
	ft_sort_5_500(a, b, sortint, size);
	ft_pb_6_500(a, b, sortint, size);
	ft_sort_6_500(a, b, sortint, size);
	ft_pb_rest_500(a, b, sortint, size);
	ft_sort_rest_500(a, b, sortint, size);
}

int	ft_opti_sort(t_first *a, int max, int min, int size)
{
	t_stack	*new;
	int		i;
	int		j;

	i = 0;
	new = a->first_stack;
	while (new->nb != max && new->nb != min)
	{
		i++;
		new = new->next;
	}
	j = i + 1;
	new = new->next;
	while (new != NULL && max != min && new->nb != max && new->nb != min)
	{
		j++;
		new = new->next;
	}
	j = size - j - 1;
	if (i <= j && i > 0)
		return (2);
	else if (j < i)
		return (1);
	return (0);
}
