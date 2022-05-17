/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:01 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/17 21:30:00 by anrechai         ###   ########.fr       */
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

void	display(t_stack *a, t_stack *b)
{
	while (a != NULL || b != NULL)
	{
		if (a == NULL)
		{
			printf("    ");
		}
		if (a != NULL)
		{
			printf("%d   ", a->nb);
			a = a->next;
		}
		if (b == NULL)
			printf("\n");
		if (b != NULL)
		{
			printf("%d\n", b->nb);
			b = b->next;
		}
	}
	printf("\n_   _\nA   B\n");
	return ;
}

void	display_b(t_stack *display)
{
	while (display != NULL)
	{
		printf("%d\n", display->nb);
		display = display->next;
	}
	printf("_\nB\n");
	return ;
}

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
