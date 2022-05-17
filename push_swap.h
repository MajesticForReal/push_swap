/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:57:03 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/17 21:22:37 by anrechai         ###   ########.fr       */
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

void			ft_pb(t_first *a, t_first *b);
void			ft_free(char **tab);
void			ft_putstr(char *str);
void			add_push_back(t_stack *start, int i);
void			display(t_stack *a, t_stack *b);
void			display_b(t_stack *display);
void			add_front_b(t_first *a, t_first *b);
void			del_front(t_first *ab);

char			*ft_strjoin(int size, char **strs, char *sep);
char			**ft_split(char const *s, char c);

long long int	ft_atoi(char *tab);
long long int	*ft_fill_tab(long long *res, char **tab);

#endif
