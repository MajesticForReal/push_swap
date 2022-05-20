/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:01 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/20 18:21:21 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_push_back(t_stack *start, int i)
{
	t_stack	*new;

	new = ft_initialize_struct();
	while (start->next != NULL)
		start = start->next;
	start->next = new;
	new->nb = i;
	new->next = NULL;
}

// void	display(t_stack *a, t_stack *b)
// {
	// while (a != NULL || b != NULL)
	// {
		// if (a == NULL)
		// {
			// printf("    ");
		// }
		// if (a != NULL)
		// {
			// printf("%d   ", a->nb);
			// a = a->next;
		// }
		// if (b == NULL)
			// printf("\n");
		// if (b != NULL)
		// {
			// printf("%d\n", b->nb);
			// b = b->next;
		// }
	// }
	// printf("\n_   _\nA   B\n");
	// return ;
// }

t_first	*ft_fill_stack(long long int *res, t_first *a, int size)
{
	int	i;

	i = 1;
	a->first_stack = ft_initialize_struct();
	a->first_stack->nb = res[0];
	while (i < size)
	{
		add_push_back(a->first_stack, res[i]);
		i++;
	}
	return (a);
}

void	ft_pa(t_first *a, t_first *b)
{
	if (b->first_stack == NULL)
		return ;
	add_front_a_from_b(a, b);
	del_front(b);
	ft_putstr("pa\n");
	return ;
}

void	add_front_a_from_b(t_first *a, t_first *b)
{
	t_stack	*new;

	new = ft_initialize_struct();
	new->nb = b->first_stack->nb;
	new->next = a->first_stack;
	a->first_stack = new;
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

void	ft_choice(int size, t_first *a, int *sortint)
{
	t_first			*b;

	b = ft_initialize_first();

	if (size == 2)
		ft_sa(a);
	// else if (size == 3)
		// ft_sort_3(a, sortint);
	// else if (size == 4)
		// ft_sort_4(a, b, sortint);
	// else if (size == 5)
		// ft_sort_5(a, b, sortint);
	else if (size >= 6 && size <= 100)
		ft_sort_100(a, b, sortint, size);
	// else if (size > 100)
		// ft_sort_500(a, b, sortint);
	free(b);
}

void	ft_sort_100(t_first *a, t_first *b, int *sortint, int size)
{
	ft_pb_first(a, b, sortint, size);
	ft_sort_first(a, b, sortint, size);
	ft_pb_mid(a, b, sortint, size);
	ft_sort_mid(a, b, sortint, size);
	ft_pb_last(a, b, sortint, size);
	ft_sort_last(a, b, sortint, size);
	ft_pb_rest(a, b, sortint, size);
	ft_sort_rest(a, b, sortint, size);
}

void	ft_pb_first(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if (a->first_stack->nb < sortint[size - tier])
			ft_ra(a);
		else if (a->first_stack->nb >= sortint[size - tier])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_mid(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if ((a->first_stack->nb < sortint[size - (tier * 2)])
			|| (a->first_stack->nb >= sortint[size - tier]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (tier * 2)])
			|| (a->first_stack->nb < sortint[size - tier]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_last(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if ((a->first_stack->nb < sortint[size - (tier * 3)])
			|| (a->first_stack->nb >= sortint[size - (tier * 2)]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (tier * 3)])
			|| (a->first_stack->nb < sortint[size - (tier * 2)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_rest(t_first *a, t_first *b, int	*sortint, int size)
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
			ft_ra(a);
		else if (a->first_stack->nb < sortint[size - (tier * 3)])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_sort_first(t_first *a, t_first *b, int *sortint, int size)
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

void	ft_sort_mid(t_first *a, t_first *b, int *sortint, int size)
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

void	ft_sort_last(t_first *a, t_first *b, int *sortint, int size)
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

void	ft_min_to_top(t_first *a, int min)
{
	while (min != a->first_stack->nb)
		ft_rra(a);
}

void	ft_sort_rest(t_first *a, t_first *b, int *sortint, int size)
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
// void	ft_sort_2(t_first *a, int *sortint)
// {
	// if (a->first_stack->nb != sortint[0])
		// ft_sa(a);
// }
