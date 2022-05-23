#include "push_swap.h"

void	ft_pb_first(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if (a->first_stack->nb < sortint[size - tier])
			ft_ra(a);
		else if (a->first_stack->nb >= sortint[size - tier])
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_mid(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if ((a->first_stack->nb < sortint[size - (tier * 2)])
			|| (a->first_stack->nb >= sortint[size - tier]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (tier * 2)])
			|| (a->first_stack->nb < sortint[size - tier]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_last(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	i;

	tier = size / 3;
	i = 0;
	while (i < tier)
	{
		if ((a->first_stack->nb < sortint[size - (tier * 3)])
			|| (a->first_stack->nb >= sortint[size - (tier * 2)]))
			ft_ra(a);
		else if ((a->first_stack->nb >= sortint[size - (tier * 3)])
			|| (a->first_stack->nb < sortint[size - (tier * 2)]))
		{
			ft_pb(a, b);
			i++;
		}
	}
}

void	ft_pb_rest(t_first *a, t_first *b, int	*sortint, int size)
{
	int	tier;
	int	rest;
	int	i;

	if (size % 3 == 0)
		return ;
	tier = size / 3;
	rest = size % 3;
	i = 0;
	while (i < rest)
	{
		if (a->first_stack->nb >= sortint[size - (tier * 3)])
			ft_ra(a);
		else if (a->first_stack->nb < sortint[size - (tier * 3)])
		{
			ft_pb(a, b);
			i++;
		}
	}
}