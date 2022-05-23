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

// void	ft_sort_2(t_first *a, int *sortint)
// {
	// if (a->first_stack->nb != sortint[0])
		// ft_sa(a);
// }
