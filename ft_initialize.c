/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:43:24 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:43:24 by anrechai         ###   ########.fr       */
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
