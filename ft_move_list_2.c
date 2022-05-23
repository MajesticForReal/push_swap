#include "push_swap.h"

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

void	add_front_a_from_b(t_first *a, t_first *b)
{
	t_stack	*new;

	new = ft_initialize_struct();
	new->nb = b->first_stack->nb;
	new->next = a->first_stack;
	a->first_stack = new;
}

void	ft_min_to_top(t_first *a, int min)
{
	while (min != a->first_stack->nb)
		ft_rra(a);
}