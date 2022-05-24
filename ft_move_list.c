/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:43:10 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:43:10 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	add_front_b_from_a(t_first *a, t_first *b)
{
	t_stack	*new;

	new = ft_initialize_struct();
	new->nb = a->first_stack->nb;
	new->next = b->first_stack;
	b->first_stack = new;
}

void	del_front(t_first *ab)
{
	t_stack	*new;

	new = ab->first_stack;
	ab->first_stack = ab->first_stack->next;
	free(new);
}

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
