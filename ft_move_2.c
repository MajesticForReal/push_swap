/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:18:58 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:43:19 by anrechai         ###   ########.fr       */
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

void	ft_rrb(t_first *b)
{
	if (b->first_stack == NULL || b->first_stack->next == NULL)
		return ;
	add_front(b);
	del_back(b);
	ft_putstr("rrb\n");
}
