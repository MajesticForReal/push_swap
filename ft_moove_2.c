/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:05 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/18 00:25:07 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_first *a, t_first *b)
{
	if (a->first_stack == NULL)
		return ;
	add_front_b_from_a(a, b);
	del_front(a);
	ft_putstr("pb\n");
	return ;
}

void	ft_ra(t_first *a)
{
	if (a->first_stack == NULL || a->first_stack->next == NULL)
		return ;
	add_push_back(a->first_stack, a->first_stack->nb);
	del_front(a);
	ft_putstr("ra\n");
}

void	ft_rb(t_first *b)
{
	if (b->first_stack == NULL || b->first_stack->next == NULL)
		return ;
	add_push_back(b->first_stack, b->first_stack->nb);
	del_front(b);
	ft_putstr("rb\n");
}

void	ft_rra(t_first *a)
{
	if (a->first_stack == NULL || a->first_stack->next == NULL)
		return ;
	add_front(a);
	del_back(a);
	ft_putstr("rra\n");
}

void	add_front(t_first *ab)
{
	t_stack	*tmp;
	t_stack	*new_first;

	tmp = ab->first_stack;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_first = ft_initialize_struct();
	new_first->nb = tmp->nb;
	new_first->next = ab->first_stack;
	ab->first_stack = new_first;
}

void	del_back(t_first *ab)
{
	t_stack	*tmp;

	tmp = ab->first_stack;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	free(tmp->next);
	tmp->next = NULL;
}

void	ft_rrb(t_first *b)
{
	if (b->first_stack == NULL || b->first_stack->next == NULL)
		return ;
	add_front(b);
	del_back(b);
	ft_putstr("rrb\n");
}

void	ft_sa(t_first *a)
{
	int	tmp;

	if (a->first_stack == NULL || a->first_stack->next == NULL)
		return ;
	tmp = a->first_stack->nb;
	a->first_stack->nb = a->first_stack->next->nb;
	a->first_stack->next->nb = tmp;
	ft_putstr("sa\n");
}

void	ft_sb(t_first *b)
{
	int	tmp;

	if (b->first_stack == NULL || b->first_stack->next == NULL)
		return ;
	tmp = b->first_stack->nb;
	b->first_stack->nb = b->first_stack->next->nb;
	b->first_stack->next->nb = tmp;
	ft_putstr("sb\n");
}

void	ft_free_stack(t_first *a)
{
	t_stack	*tmp;

	tmp = a->first_stack;
	while (tmp->next != NULL)
	{
		tmp = a->first_stack->next;
		free(a->first_stack);
		a->first_stack = tmp;
	}
	free(a->first_stack);
}
