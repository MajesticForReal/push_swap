/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:18:58 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/17 21:06:39 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_initialize_struct(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->nb = 0;
	return (new);
}

t_first	*ft_initialize_first(void)
{
	t_first	*new;

	new = malloc(sizeof(t_first));
	if (!new)
		return (NULL);
	new->first_stack = NULL;
	return (new);
}

void	add_front_b(t_first *a, t_first *b)
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

