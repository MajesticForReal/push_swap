/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:01 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 20:59:23 by anrechai         ###   ########.fr       */
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
	// else if (size >= 6 && size <= 100)
		// ft_sort_100(a, b, sortint, size);
	 else if (size > 5)
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
	// display(a->first_stack, b->first_stack);
	ft_sort_1_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_2_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_sort_2_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_3_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_sort_3_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_4_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_sort_4_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_5_500(a, b, sortint, size);
	ft_sort_5_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_6_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_sort_6_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_pb_rest_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
	ft_sort_rest_500(a, b, sortint, size);
	// display(a->first_stack, b->first_stack);
}

// void	ft_sort_2(t_first *a, int *sortint)
// {
	// if (a->first_stack->nb != sortint[0])
		// ft_sa(a);
// }
