/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:43:30 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/24 19:43:30 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	tab = NULL;
	return ;
}

void	ft_free_main(t_first *a, char **tab, long long int *res, int *sortint)
{
	ft_free_stack(a);
	free(a);
	ft_free(tab);
	free(res);
	free(sortint);
}

void	ft_putstr_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}
