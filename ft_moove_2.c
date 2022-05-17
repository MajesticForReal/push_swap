/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:57:05 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/17 21:31:19 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_first *a, t_first *b)
{
	if (a->first_stack == NULL)
		return ;
	add_front_b(a, b);
	del_front(a);
	return ;
}
