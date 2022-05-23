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

void	ft_pa(t_first *a, t_first *b)
{
	if (b->first_stack == NULL)
		return ;
	add_front_a_from_b(a, b);
	del_front(b);
	ft_putstr("pa\n");
	return ;
}
