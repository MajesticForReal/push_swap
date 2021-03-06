/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:57:03 by anrechai          #+#    #+#             */
/*   Updated: 2022/06/08 18:07:36 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int					nb;
	struct s_stack		*next;
}t_stack;

typedef struct s_first
{
	t_stack	*first_stack;
}t_first;

t_first			*ft_fill_stack(long long int *res,
					t_first *start, int size);
t_stack			*ft_initialize_struct(void);
t_first			*ft_initialize_first(void);

int				ft_check_only_space(int argc, char **argv);
int				ft_check_argv(int argc, char **argv);
int				ft_is_number(char **tab);
int				ft_is_integer(long long int *res, int i);
int				ft_is_duplicate(long long int *res, int i);
int				ft_size(char **tab);
int				ft_strlen(char *str);
int				ft_parsing(char **tab, long long int *res, int i, int j);
int				ft_is_already_sort(long long *res, char **tab);
int				ft_checker(char **tab, long long int *res, int index, int i);
int				*ft_sort_tab(long long int *res, int *sortint, int size);
int				ft_opti_sort(t_first *a, int max, int min, int size);

void			ft_putstr_error(char *str);
void			ft_free_stack(t_first *a);
void			ft_sb(t_first *b);
void			ft_sa(t_first *a);
void			ft_rrb(t_first*b);
void			ft_rra(t_first *a);
void			add_front(t_first *ab);
void			del_back(t_first *ab);
void			ft_rb(t_first *b);
void			ft_ra(t_first *a);
void			ft_pb(t_first *a, t_first *b);
void			ft_free(char **tab);
void			ft_putstr(char *str);
void			add_push_back(t_stack *start, int i);
void			add_front_b_from_a(t_first *a, t_first *b);
void			del_front(t_first *ab);
void			add_front_a_from_b(t_first *a, t_first *b);
void			ft_pa(t_first *a, t_first *b);
void			ft_choice(int size, t_first *a, int *sortint);
void			ft_sort_100(t_first *a, t_first *b, int *sortint, int size);
void			ft_choice(int size, t_first *a, int *sortint);
void			ft_sort_100(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_min_to_top(t_first *a, int min);
void			ft_min_to_top_rra(t_first *a, int min);
void			ft_pb_first_100(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_mid_100(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_last_100(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_rest_100(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_1_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_2_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_3_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_4_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_5_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_6_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_pb_rest_500(t_first *a, t_first *b, int	*sortint, int size);
void			ft_sort_3(t_first *a, int *sortint);
void			ft_sort_4(t_first *a, t_first *b, int *sortint);
void			ft_sort_5(t_first *a, t_first *b, int *sortint);
void			ft_sort_1_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_2_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_3_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_4_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_5_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_6_500(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_rest_500(t_first *a, t_first *b,
					int *sortint, int size);
void			ft_sort_first_100(t_first *a, t_first *b,
					int *sortint, int size);
void			ft_sort_mid_100(t_first *a, t_first *b, int *sortint, int size);
void			ft_sort_last_100(t_first *a, t_first *b,
					int *sortint, int size);
void			ft_sort_rest_100(t_first *a, t_first *b,
					int *sortint, int size);
void			ft_free_main(t_first *a, char **tab,
					long long int *res, int *sortint);
void			ft_norme_opti(t_first *b, int max, int min, int six);

char			*ft_strjoin(int size, char **strs, char *sep);
char			**ft_split(char const *s, char c);

long long int	ft_atoi(char *tab);
long long int	*ft_fill_tab(long long *res, char **tab);

#endif
